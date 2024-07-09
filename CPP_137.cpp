#include <iostream>
#include <string>
#include <sstream>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a, boost::any(b));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        istringstream iss(static_cast<string>(b));
        float b_float;
        iss >> b_float;
        return a > b_float ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (static_cast<string>(a) > static_cast<string>(b))
            return a;
        else if (static_cast<string>(a) < static_cast<string>(b))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        istringstream iss(static_cast<string>(b));
        int b_int;
        iss >> b_int;
        return a > b_int ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        istringstream iss(static_cast<string>(a));
        float a_float;
        iss >> a_float;
        return a_float > boost::any(b) ? a : b;
    }
    else
        return boost::any("None");
}

int main() {
    boost::any a = 10;
    boost::any b = "20.5";
    cout << boost::any_cast<string>(compare_one(a, b)) << endl;

    return 0;
}