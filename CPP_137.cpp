```cpp
#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b) == "None") {
            return a;
        }
        else {
            return boost::any_cast<string>(b);
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (boost::any_cast<string>(a) == "None") {
            return boost::any_cast<string>(b);
        }
        else {
            return boost::any_cast<string>(a);
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::any_cast<string>(a) == "None") {
            return boost::any_cast<string>(b);
        }
        else {
            return boost::any_cast<string>(a);
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (boost::any_cast<string>(a) == "None") {
            return boost::any_cast<string>(b);
        }
        else {
            return boost::any_cast<string>(a);
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b)) {
            return a;
        }
        else if (boost::any_cast<string>(a) < boost::any_cast<string>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        }
        else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        }
        else {
            return "None";
        }
    }
}