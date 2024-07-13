#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a.convert_to<float>() > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<int>() > b.convert_to<float>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fa = stof(a.convert_to<string>().c_str());
        float fb = b.convert_to<float>();
        return fa > fb ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fb = stof(b.convert_to<string>().c_str());
        float fa = a.convert_to<float>();
        return fa > fb ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = a.convert_to<string>();
        string sb = b.convert_to<string>();
        return stof(sa.c_str()) > stof(sb.c_str()) ? a : b;
    }
    else {
        return boost::any("None");
    }
}