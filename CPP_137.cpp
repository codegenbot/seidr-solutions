```
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<float>(b)
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)boost::any_cast<int>(b) > boost::any_cast<float>(a)
               ? b
               : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return ((std::string)boost::any_cast<std::string>(a) >= (std::string)boost::any_cast<std::string>(b))
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        int num = boost::any_cast<int>(a);
        return (num >= std::stoi(str))
               ? "None"
               : a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) >= num)
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str = boost::any_cast<std::string>(b);
        float num = boost::any_cast<float>(a);
        return (num >= std::stof(str))
               ? a
               : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(b);
        float num = boost::any_cast<float>(a);
        return (std::stof(str) >= num)
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b))
               ? a
               : b;
    }
    else {
        return "None";
    }
}