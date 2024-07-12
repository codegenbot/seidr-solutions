#include <string>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            float fa = std::stof(a.convert<string>().c_str());
            float fb = (float)b.convert<float>();
            return fa > fb ? a : b;
        } catch (...) {
            throw;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        try {
            double fa = std::stod(a.convert<string>().c_str());
            double fb = (double)b.convert<double>();
            return fa > fb ? a : b;
        } catch (...) {
            throw;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        try {
            int fa = std::stoi(a.convert<string>().c_str());
            int fb = (int)b.convert<int>();
            return fa > fb ? a : b;
        } catch (...) {
            throw;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        try {
            float fa = std::stof(a.convert<string>().c_str());
            float fb = std::stof(b.convert<string>().c_str());
            return fa > fb ? a : b;
        } catch (...) {
            throw;
        }
    }
    return boost::any("None");
}