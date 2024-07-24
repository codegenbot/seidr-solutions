```cpp
#include <boost/any.hpp>
#include <string>
using namespace boost;

bool compare_one(boost::any a, boost::any b) {
    if(a.type() == typeless_type || b.type() == typeless_type) {
        if(a.type() == typeless_type && b.type() == typeless_type) {
            std::string a_s = any_cast<std::string>(a);
            std::string b_s = any_cast<std::string>(b);
            int a_int = stoi(a_s);
            int b_int = stoi(b_s);
            if(a_int > b_int)
                return true;
            else if(a_int < b_int)
                return false;
            else
                return a_int == 0;
        } else {
            std::string a_s = any_cast<std::string>(a);
            double b_d = any_cast<double>(b);
            int a_int = stoi(a_s);
            if(a_int > b_d)
                return true;
            else
                return false;
        }
    } else {
        if(any_cast<int>(a) > any_cast<int>(b))
            return true;
        else if(any_cast<int>(a) < any_cast<int>(b))
            return false;
        else
            return a_int == 0;
    }
}