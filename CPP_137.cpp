#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any(b.convert_to<string>() > a.convert_to<string>() ? b : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        float fa = (float)a.convert_to<int>();
        return fa > std::stof(b.convert_to<string>()) ? boost::any(fa) : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        float fb = std::stof(a.convert_to<string>());
        return fb > b.convert_to<int>() ? boost::any(a) : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fa = a.convert_to<float>();
        return fa > std::stof(b.convert_to<string>()) ? boost::any(fa) : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float fb = std::stof(a.convert_to<string>());
        return fb > a.convert_to<float>() ? boost::any(a) : boost::any("None");
    }
    return boost::any("None");
}