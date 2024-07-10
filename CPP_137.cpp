#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (get<int>(a) > get<int>(b)) ? a : ((get<int>(a) < get<int>(b)) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) < get<double>(b)) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        double num1 = stod(str1.substr(0, str1.find(',')));
        double num2 = stod(str2.substr(0, str2.find(',')));
        return (num1 > num2) ? a : ((num1 < num2) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int i = get<int>(a);
        double d = get<double>(b);
        return (i > d) ? a : ((i < d) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = get<int>(a);
        string s = any_cast<string>(b);
        double d = stod(s.substr(0, s.find(',')));
        return ((i > d) ? a : ((i < d) ? b : boost::any("None"))));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = get<double>(a);
        string s = any_cast<string>(b);
        int i = stod(s.substr(0, s.find(',')));
        return ((d > i) ? a : ((d < i) ? b : boost::any("None"))));
    }
    else {
        return boost::any("None");
    }
}