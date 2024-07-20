#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        if ((std::string)a.convert_to<std::string>() > (std::string)b.convert_to<std::string>()) {
            return a;
        }
        else if ((std::string)a.convert_to<std::string>() < (std::string)b.convert_to<std::string>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        if ((float)a.convert_to<float>() > (std::string)b.convert_to<std::string>().erase(0, 1).erase((std::string)b.convert_to<std::string>()).length()-1) {
            return a;
        }
        else if ((float)a.convert_to<float>() < (std::string)b.convert_to<std::string>().erase(0, 1).erase((std::string)b.convert_to<std::string>()).length()-1) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        if ((std::string)a.convert_to<std::string>() > std::to_string((int)b.convert_to<int>())) {
            return a;
        }
        else if ((std::string)a.convert_to<std::string>() < std::to_string((int)b.convert_to<int>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        if ((std::string)a.convert_to<std::string>() > std::to_string((float)b.convert_to<float>()).erase(0, 1).erase((std::string)b.convert_to<std::string>()).length()-1) {
            return a;
        }
        else if ((std::string)a.convert_to<std::string>() < std::to_string((float)b.convert_to<float>()).erase(0, 1).erase((std::string)b.convert_to<std::string>()).length()-1) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)a.convert_to<std::string>() > (std::string)b.convert_to<std::string>()) ? a : ((std::string)a.convert_to<std::string>() < (std::string)b.convert_to<std::string>()) ? b : boost::any("None");
    }
    else {
        if ((float)a.convert_to<float>() > (float)b.convert_to<float>()) {
            return a;
        }
        else if ((float)a.convert_to<float>() < (float)b.convert_to<float>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
}