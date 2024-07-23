#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
#include<boost/more_traits.hpp>

using namespace std;
namespace boost {
    namespace more_traits {

        template<>
        struct class_tag<std::string> : public class_tag<const char*> {};
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        if (sa.empty()) {
            return b;
        }

        size_t comma_pos = sa.find(',');
        if (comma_pos != string::npos) {
            double a_val = stod(sa.substr(0, comma_pos));
            double b_val = stod(sb);
            if (a_val > b_val) {
                return a;
            } else {
                return b;
            }
        }

        if (stod(sa) > stod(sb)) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int a_val = boost::any_cast<int>(a);
        string sb = boost::any_cast<string>(b);

        size_t comma_pos = sb.find(',');
        if (comma_pos != string::npos) {
            double b_val = stod(sb.substr(0, comma_pos));
            return (a_val > b_val ? a : b);
        } else {
            return (a_val > stod(sb) ? a : b);
        }
    } else {
        return "None";
    }
}