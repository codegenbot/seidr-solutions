#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double())) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else if (is_any_of<a>(std::string())) {
        std::string sa = any_cast<std::string>(a);
        double da = std::stod(sa);
        
        if (is_any_of<b>(double())) {
            double db = any_cast<double>(b);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else if (is_any_of<b>(std::string())) {
            std::string sb = any_cast<std::string>(b);
            double db = std::stod(sb);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else {
        throw std::runtime_error("Invalid type");
    }
}