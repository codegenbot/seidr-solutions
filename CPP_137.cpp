#include <boost/any.hpp>
#include <string>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if(a.type() == boost::any::typeless_type || b.type() == boost::any::typeless_type) {
        if(a.type() == boost::any::typeless_type && b.type() == boost::any::typeless_type) {
            string a_s = any_cast<string>(a);
            string b_s = any_cast<string>(b);
            int a_int = stoi(a_s);
            int b_int = stoi(b_s);
            if(a_int > b_int)
                return a;
            else if(a_int < b_int)
                return b;
            else
                return boost::any("None");
        } else {
            string a_s = any_cast<string>(a);
            double b_d = any_cast<double>(b);
            int a_int = stoi(a_s);
            if(a_int > b_d)
                return a;
            else
                return b;
        }
    } else {
        if(any_cast<int>(a) > any_cast<int>(b))
            return a;
        else if(any_cast<int>(a) < any_cast<int>(b))
            return b;
        else
            return boost::any("None");
    }
}