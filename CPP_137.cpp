```cpp
#include <boost/any.hpp>
#include <string>

using boost::any;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() < b.convert_to<float>() ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() < b.convert_to<double>() ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = stoi(b.convert_to<string>().c_str());
        return ai > (int)a.convert_to<int>() ? &b : &a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<float>() < b.convert_to<int>() ? &b : &a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a.convert_to<double>() > b.convert_to<int>() ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        double af = stod(a.convert_to<string>().c_str());
        return af < b.convert_to<float>() ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double af = stod(a.convert_to<string>().c_str());
        return af > b.convert_to<double>() ? &b : &a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double ai = stod(a.convert_to<string>().c_str()), bi = stod(b.convert_to<string>().c_str());
        return ai < bi ? &b : &a;
    }
    return any();
}