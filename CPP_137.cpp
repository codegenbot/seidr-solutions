#include <iostream>
#include<string>
#include<boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? b : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? a : boost::any("None"));
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
             (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b)
            ? b : (boost::any_cast<double>(a) < boost::any_cast<double>(b) ? a : boost::any("None"));
    }
    else if ((a.type() == typeid(string)) && (b.type() == typeid(string))) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA > strB) return b;
        else if (strA < strB) return a;
        else return boost::any("None");
    }
    else {
        cout << "Invalid input type. Please enter integers, floats or strings." << endl;
        return boost::any();
    }
}