#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b.get<boost::any>());
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (boost::any) (b > a ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = any_cast<string>(a);
        string str_b = any_cast<string>(b);

        int len_a = str_a.size();
        int len_b = str_b.size();

        for (int i = 0; i < len_a; ++i) {
            if (str_a[i] == ',') {
                --len_a;
                break;
            }
        }

        for (int i = 0; i < len_b; ++i) {
            if (str_b[i] == ',') {
                --len_b;
                break;
            }
        }

        str_a = str_a.substr(0, len_a);
        str_b = str_b.substr(0, len_b);

        return boost::any((boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? b : a);
    }
    else {
        return boost::any("None");
    }
}