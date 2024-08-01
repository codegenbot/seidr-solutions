#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) b > (int) a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) b > (float) a ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        return str2 > str1 ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int int_val = boost::any_cast<int>(a);
        std::string str = boost::any_cast<std::string>(b);
        return (float)int_val > atof(str.c_str()) ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int int_val = boost::any_cast<int>(b);
        return atof(str.c_str()) > (float)int_val ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float float_val = boost::any_cast<float>(a);
        std::string str = boost::any_cast<std::string>(b);
        return float_val > atof(str.c_str()) ? b : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float float_val = boost::any_cast<float>(b);
        return atof(str.c_str()) > float_val ? b : a;
    }
    else {
        return "None";
    }
}

float int_to_float(int val) {
    return (float)val;
}