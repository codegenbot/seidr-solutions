```cpp
#include <boost/any.hpp>
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return ((int)a > (int)b) ? a : ((int)a == (int)b) ? boost::any("") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return ((float)a > (float)b) ? a : ((float)a == (float)b) ? boost::any("") : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return ((std::string)a > (std::string)b) ? a : ((std::string)a == (std::string)b) ? boost::any("") : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)a > (float)b) ? a : ((int)a < (float)b) ? b : boost::any("");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return (std::stoi((std::string)b) > (int)a) ? b : (std::stoi((std::string)b) < (int)a) ? a : boost::any("");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)a > (int)b) ? a : ((float)a < (int)b) ? b : boost::any("");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        return (std::stof((std::string)b) > (float)a) ? b : (std::stof((std::string)b) < (float)a) ? a : boost::any("");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        return (std::stoi((std::string)a) > (int)b) ? a : (std::stoi((std::string)a) < (int)b) ? b : boost::any("");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        return (std::stof((std::string)a) > (float)b) ? a : (std::stof((std::string)a) < (float)b) ? b : boost::any("");
    }
    return a;
}