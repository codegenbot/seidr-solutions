#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        int num1 = stoi(str1.substr(0, str1.find(',')));
        int num2 = stoi(str2.substr(0, str2.find(',')));

        return (double)num1 > (double)num2 ? a : b;
    }
    else if (a.type() == typeid(string)) {
        string str = boost::any_cast<string>(a);
        int num = stoi(str.substr(0, str.find(',')));
        return b.type() == typeid(int) && (int)b >= num ? "None" : a;
    }
    else if (b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = stoi(str.substr(0, str.find(',')));
        return a.type() == typeid(int) && (int)a >= num ? "None" : b;
    }

    return "None";
}