#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (std::get<int>(a) > std::get<int>(b)) ? a : ((std::get<int>(a) < std::get<int>(b)) ? b : boost::any("None"));
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (std::get<double>(a) > std::get<double>(b)) ? a : ((std::get<double>(a) < std::get<double>(b)) ? b : boost::any("None"));
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (std::get<int>(a) > std::get<double>(b)) ? a : ((std::get<int>(a) < std::get<double>(b)) ? b : boost::any("None"));
    }
    if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (std::get<double>(a) > std::get<int>(b)) ? a : ((std::get<double>(a) < std::get<int>(b)) ? b : boost::any("None"));
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double da = stod(std::any_cast<string>(a).c_str());
        double db = stod(std::any_cast<string>(b).c_str());
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double da = stod(std::any_cast<string>(a).c_str());
        return (da > static_cast<double>(std::get<int>(b))) ? a : ((da < static_cast<double>(std::get<int>(b))) ? boost::any(b) : boost::any("None"));
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double da = stod(std::any_cast<string>(a).c_str());
        return (da > std::get<double>(b)) ? a : ((da < std::get<double>(b)) ? boost::any(b) : boost::any("None"));
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double da = stod(std::any_cast<string>(b).c_str());
        return (std::get<int>(a) > da) ? a : ((std::get<int>(a) < da) ? boost::any(b) : boost::any("None"));
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = stod(std::any_cast<string>(b).c_str());
        return (std::get<double>(a) > da) ? a : ((std::get<double>(a) < da) ? boost::any(b) : boost::any("None"));
    }
    return "None";
}