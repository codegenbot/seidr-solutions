#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<float>(a)
            ? b : a;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);

        bool has_decimal1 = false;
        for (char c : s1) {
            if (c == '.' || c == ',') {
                has_decimal1 = true;
                break;
            }
        }

        bool has_decimal2 = false;
        for (char c : s2) {
            if (c == '.' || c == ',') {
                has_decimal2 = true;
                break;
            }
        }

        return has_decimal1 && has_decimal2
            ? ((stod(s2) > stod(s1)) ? b : a)
            : ((s2 > s1) ? b : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
            ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(b) > boost::any_cast<float>(a)
            ? b : a;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(int))) {
        string s = boost::any_cast<string>(a);
        bool has_decimal = false;
        for (char c : s) {
            if (c == '.' || c == ',') {
                has_decimal = true;
                break;
            }
        }

        return has_decimal
            ? ((stod(s) > boost::any_cast<int>(b)) ? a : b)
            : ((s > to_string(boost::any_cast<int>(b))) ? a : b);
    }
    else if ((a.type() == typeid(int)) && (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        int x = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        bool has_decimal = false;
        for (char c : s) {
            if (c == '.' || c == ',') {
                has_decimal = true;
                break;
            }
        }

        return has_decimal
            ? ((boost::any_cast<int>(a) > stod(s)) ? a : b)
            : ((x > stoi(s)) ? a : b);
    }

    return boost::any("None");
}