#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (stod(b.convert_to<string>().c_str()) > a.convert_to<int>()) {
            return b;
        } 
        else if (stod(b.convert_to<string>().c_str()) < a.convert_to<int>()) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stod(a.convert_to<string>().c_str()) > b.convert_to<int>()) {
            return a;
        } 
        else if (stod(a.convert_to<string>().c_str()) < b.convert_to<int>()) {
            return boost::any(b);
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(a.convert_to<string>().c_str()) > b.convert_to<float>()) {
            return a;
        } 
        else if (stod(a.convert_to<string>().c_str()) < b.convert_to<float>()) {
            return boost::any(b);
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        if (a.convert_to<float>() > b.convert_to<int>()) {
            return a;
        } 
        else if (a.convert_to<float>() < b.convert_to<int>()) {
            return boost::any(b);
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (a.convert_to<int>() > b.convert_to<int>()) {
            return a;
        } 
        else if (a.convert_to<int>() < b.convert_to<int>()) {
            return boost::any(b);
        }
        else {
            return boost::any("None");
        }
    }

    return boost::any();
}