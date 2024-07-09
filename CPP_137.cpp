#include <boost/any.hpp>
#include <string>
#include <limits>
#include <stdexcept>

using namespace boost;

any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string x = boost::any_cast<std::string>(a);
        int y = boost::any_cast<int>(b);
        if (std::stod(x) > y)
            return a;
        else if (y > std::stod(x))
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > std::stod(y))
            return a;
        else if (std::stod(y) > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if ((a.type() == typeid(float)) && (b.type() == typeid(std::string))) {
        float x = boost::any_cast<float>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > std::stod(y))
            return a;
        else if (std::stod(y) > x)
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else if ((a.type() == typeid(std::string)) && (b.type() == typeid(float))) {
        std::string x = boost::any_cast<std::string>(a);
        float y = boost::any_cast<float>(b);
        if (std::stod(x) > y)
            return a;
        else if (y > std::stod(x))
            return b;
        else
            return any(typeid(string) == "None");
    } 
    else {
        throw std::runtime_error("Invalid input types");
    }
}