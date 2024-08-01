#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(int)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (std::stoi(y) > x) ? a : ((std::stoi(y) < x) ? b : boost::any(typeid(int)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(int)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float x = boost::any_cast<float>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (std::stof(y) > x) ? a : ((std::stof(y) < x) ? b : boost::any(typeid(int)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string x = boost::any_cast<std::string>(a);
        int y = boost::any_cast<int>(b);
        return (std::stof(x) > y) ? a : ((std::stof(x) < y) ? b : boost::any(typeid(int)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string x = boost::any_cast<std::string>(a);
        float y = boost::any_cast<float>(b);
        return (std::stof(x) > y) ? a : ((std::stof(x) < y) ? b : boost::any(typeid(int)));
    }
    else if (a.type() == typeid(int) && a.convert_to(b)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(int)));
    }
    else if (boost::any_cast<std::string>(a) == "0" && boost::any_cast<std::string>(b) == "0") {
        return boost::any(typeid(int));
    }
    else {
        return a > b ? a : b;
    }
}