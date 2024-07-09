#include <boost/any.hpp>
#include <string>
#include <cmath>

using namespace boost;

any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : typeid(void));
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : typeid(void));
    } 
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? a : ((y > x) ? b : typeid(void));
    } 
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        return (std::stod(x) > y) ? a : ((y > std::stod(x)) ? b : typeid(void));
    } 
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(std::string)) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > std::stod(y)) ? a : ((std::stod(y) > x) ? b : typeid(void));
    } 
    else {
        return typeid(void);
    }
}