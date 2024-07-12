```
#include <string>
#include <iostream>

bool compareAny(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert<int>() > (float)b.convert<float>();
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert<int>() > (double)b.convert<double>();
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convert<float>() > (int)b.convert<int>();
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert<double>() > (int)b.convert<int>();
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(a.convert<std::string>().get cref());
            float fb = (float)b.convert<float>().get cref();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert<std::string>().get cref());
            double fb = (double)b.convert<double>().get cref();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert<std::string>().get cref());
            int fb = (int)b.convert<int>().get cref();
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        try {
            float fa = std::stof(a.convert<std::string>().get cref());
            float fb = std::stof(b.convert<std::string>().get cref());
            return fa > fb;
        } catch (...) {
            return false;
        }
    } else {
        throw "Unknown types";
    }

    return false;