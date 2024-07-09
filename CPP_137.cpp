#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_tag, get_type(a)>() && is_same<any_tag, get_type(b)>()) {
        return any_cast<int>(a) > any_cast<int>(b) ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() && is_same<string_any_tag, get_type(b)>()) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() || is_same<string_any_tag, get_type(b)>()) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 == str2) {
            return "None";
        } else if (str1 > str2) {
            return a;
        } else {
            return b;
        }
    } else {
        throw invalid_argument("Invalid types");
    }
}

int main() {
    boost::any a = 5;
    boost::any b = 10;
    boost::any result = compare_one(a, b);
    std::cout << "Result: " << any_cast<string>(result) << std::endl;
    return 0;
}