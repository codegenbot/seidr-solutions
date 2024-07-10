#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return max(to_string((int)a.convertible_to<int>()), (string)b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        istringstream iss((string)b);
        float b_float;
        iss >> b_float;
        if ((float)a.convertible_to<float>() > b_float)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max((string)a, (string)b));
    }
    else {
        return boost::any("None");
    }
}