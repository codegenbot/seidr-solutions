#include <string>
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return x > std::stof(y) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        float x = std::stof(boost::any_cast<std::string>(a));
        int y = boost::any_cast<int>(b);
        return x > y ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float x = std::stof(boost::any_cast<std::string>(a));
        float y = boost::any_cast<float>(b);
        return x > y ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float x = std::stof(boost::any_cast<std::string>(a));
        float y = std::stof(boost::any_cast<std::string>(b));
        return x > y ? a : (x < y ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return x > y ? a : (x < y ? b : boost::any("None")));
    }
    else {
        return boost::any("None");
    }
}