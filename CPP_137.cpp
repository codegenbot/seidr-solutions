```cpp
#include <boost/any.hpp>
#include <string>

bool compare_one(boost::any a, boost::any b) {
    if(a.type() == boost::any::typeless_type || b.type() == boost::any::typeless_type) {
        if(a.type() == boost::any::typeless_type && b.type() == boost::any::typeless_type) {
            std::string a_s = boost::any_cast<std::string>(a);
            std::string b_s = boost::any_cast<std::string>(b);
            int a_int = stoi(a_s);
            int b_int = stoi(b_s);
            if(a_int > b_int)
                return true;
            else if(a_int < b_int)
                return false;
            else
                return a_int == 0; 
        } else {
            std::string a_s = boost::any_cast<std::string>(a);
            double b_d = boost::any_cast<double>(b);
            int a_int = stoi(a_s);
            if(a_int > b_d)
                return true;
            else
                return false;
        }
    } else {
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return true;
        else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
            return false;
        else
            return a_int == 0; 
    }
}