#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<int>(a) > any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<int>(a) > any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        int num = any_cast<int>(b);
        return stoi(str) > num ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<float>(a) > static_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a) > static_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = any_cast<string>(a);
        float num = any_cast<float>(b);
        return stof(str) > num ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = any_cast<string>(a);
        double num = any_cast<double>(b);
        return stod(str) > num ? a : b;
    }
    return a; // If the types are not as expected, just return one of them
}