#include <boost/any.hpp>
#include <string>
#include <stdexcept>

using namespace boost;

bool compare_one(boost::any& a, boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return true;
        else if (y > x)
            return false;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y)
            return true;
        else if (y > x)
            return false;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y)
            return true;
        else if (y > x)
            return false;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(std::string)) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > stod(y))
            return true;
        else if (stod(y) > x)
            return false;
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        if (stod(x) > y)
            return true;
        else if (y > stod(x))
            return false;
    }
    else {
        throw std::runtime_error("Invalid types");
    }
}