#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int) || a.type() == typeid(string) && b.type() == typeid(float) || a.type() == typeid(string) && b.type() == typeid(double)) {
        return stof(a.convert_to<string>().c_str()) < b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string) || a.type() == typeid(float) && b.type() == typeid(string) || a.type() == typeid(double) && b.type() == typeid(string)) {
        return a < stof(b.convert_to<string>().c_str()) ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return stof(a.convert_to<string>().c_str()) < stof(b.convert_to<string>().c_str()) ? &b : &a;
    }
   	return boost::any();
}