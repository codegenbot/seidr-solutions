#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double())) {
        if (is_any_of<b>(double())) {
            double da = any_cast<double>(a);
            double db = any_cast<double>(b);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else if (is_any_of<b>(std::string())) {
            std::string sa = any_cast<std::string>(a);
            std::string sb = any_cast<std::string>(b);
            double da = std::stod(sa);
            double db = std::stod(sb);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else if (is_any_of<a>(std::string())) {
        if (is_any_of<b>(double())) {
            std::string sa = any_cast<std::string>(a);
            double db = any_cast<double>(b);
            double da = std::stod(sa);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else if (is_any_of<b>(std::string())) {
            std::string sa = any_cast<std::string>(a);
            std::string sb = any_cast<std::string>(b);
            double da = std::stod(sa);
            double db = std::stod(sb);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else {
            throw std::runtime_error("Invalid type");
        }
    } else {
        throw std::runtime_error("Invalid type");
    }
}

int main() {
    boost::any a = 10.0;
    boost::any b = "20.5";
    boost::any result = compare_one(a, b);
    
    if (boost::any_cast<std::string>(result) == "None") {
        std::cout << "The values are equal." << std::endl;
    } else {
        std::cout << "The greater value is: " << boost::any_cast<std::string>(result) << "." << std::endl;
    }
    
    return 0;
}