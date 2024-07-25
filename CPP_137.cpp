#include <boost/any.hpp>
using namespace boost;

any compare(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : (x < y) ? b : any(typeid(int));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : (x < y) ? b : any(typeid(double));
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(boost::wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(boost::wstring))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? a : (x < y) ? b : any(typeid(std::string));
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(boost::wstring)) &&
               (b.type() == typeid(double))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        return (std::stod(x) > y) ? a : (std::stod(x) < y) ? b : any(typeid(std::string));
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(boost::wstring))) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > std::stod(y)) ? a : (x < std::stod(y)) ? b : any(typeid(double));
    } else {
        return any(typeid(void)); // Return void type for incompatible types
    }
}