```cpp
#include <boost/any.hpp>
#include <boost/type_index.hpp>

using namespace boost;

bool is_string(any a) {
    return get_type(a).type() == typeid(string);
}

string compare_one(any a, any b) {
    if (is_same<any_tag, get_type(a)>() && is_same<any_tag, get_type(b)>()) {
        int val1 = any_cast<int>(a);
        int val2 = any_cast<int>(b);
        return to_string(val1 > val2 ? val1 : val2);
    } else if (is_string(a) && is_string(b)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? str1 : str2;
    } else if ((is_string(a) || is_string(b))) {
        string str1 = is_string(a) ? any_cast<string>(a) : any_cast<string>(b);
        string str2 = is_string(b) ? any_cast<string>(b) : any_cast<string>(a);
        return str1 > str2 ? a : b;
    } else {
        throw invalid_argument("Invalid types");
    }
}