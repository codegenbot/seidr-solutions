#include <boost/any.hpp>
#include <string>
#include <limits>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        if (std::stod(b.convert_to<std::string>()) > a.convert_to<int>()) {
            return b;
        } else {
            return boost::any(boost::any_cast<int>(a));
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        if (std::stod(a.convert_to<std::string>()) > b.convert_to<int>()) {
            return a;
        } else {
            return boost::any(boost::any_cast<int>(b));
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        if (std::stod(a.convert_to<std::string>()) > boost::any_cast<float>(b)) {
            return a;
        } else {
            return boost::any(boost::any_cast<float>(b));
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        if (std::stod(a.convert_to<std::string>()) > boost::any_cast<double>(b)) {
            return a;
        } else {
            return boost::any(boost::any_cast<double>(b));
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        if (boost::any_cast<float>(a) > std::stod(b.convert_to<std::string>())) {
            return a;
        } else {
            return boost::any(boost::any_cast<int>(b));
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        if (boost::any_cast<double>(a) > std::stod(b.convert_to<std::string>())) {
            return a;
        } else {
            return boost::any(boost::any_cast<int>(b));
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::stod(a.convert_to<std::string>()) > std::stod(b.convert_to<std::string>())) {
            return a;
        } else if (std::stod(a.convert_to<std::string>()) < std::stod(b.convert_to<std::string>())) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    else {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}