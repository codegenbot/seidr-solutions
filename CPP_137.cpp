Here is the completed code:

```cpp
#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any(b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        int a_num = stoi(s1.substr(0, s1.find(',')));
        int b_num = stoi(s2.substr(0, s2.find(',')));
        if (a_num > b_num)
            return a;
        else if (a_num < b_num)
            return b;
        else
            return boost::any("None");
    }
    else {
        int a_int = any_cast<int>(a);
        int b_int = any_cast<int>(b);
        if (a_int > b_int)
            return a;
        else if (a_int < b_int)
            return b;
        else
            return boost::any("None");
    }
}