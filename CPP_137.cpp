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
        if (is_any_of<b>(double())) {
            double db = any_cast<double>(b);
            double da = std::stod(sa);
            return (da > db) ? a : ((da < db) ? b : boost::any("None"));
        } else if (is_any_of<b>(std::string())) {
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
    boost::any a, b;
    // read input from user
    // store it in a and b

    // call the function
    boost::any result = compare_one(a, b);

    // print the result
    if (is_any_of(result>(std::string())) && any_cast<std::string>(result) == "None") {
        std::cout << "None" << std::endl;
    } else {
        any_cast<double>(result);
        std::cout << any_cast<double>(result) << std::endl;
    }

    return 0;
}