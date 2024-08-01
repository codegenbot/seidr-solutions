#include <string>
#include <iostream>

std::string compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? "Greater" : (b < 1.0f ? "None" : "Less");
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? "Greater" : (b < 1.0 ? "None" : "Less");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? "Greater" : (b < 1.0f ? "None" : "Less");
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? "Greater" : (b < 1.0 ? "None" : "Less");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string s = a.cast<std::string>();
        float f = (float)b;
        return f > atof(s.c_str()) ? "Greater" : (f < 1.0f ? "None" : "Less");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string s = a.cast<std::string>();
        double d = (double)b;
        return d > atof(s.c_str()) ? "Greater" : (d < 1.0 ? "None" : "Less");
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float f = (float)a;
        std::string s = b.cast<std::string>();
        return atof(s.c_str()) > f ? "Greater" : (f < 1.0f ? "None" : "Less");
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double d = (double)a;
        std::string s = b.cast<std::string>();
        return atof(s.c_str()) > d ? "Greater" : (d < 1.0 ? "None" : "Less");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = a.cast<std::string>(), sb = b.cast<std::string>();
        return sa > sb ? "Greater" : (sa == sb ? "Equal" : "Less");
    }
    return "Equal";
}