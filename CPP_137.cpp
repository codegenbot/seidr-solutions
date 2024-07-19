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
        double db = any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else if (is_any_of<a>(std::string())) {
        std::string sa = any_cast<std::string>(a);
        std::string sb = any_cast<std::string>(b);
        double da = std::stod(sa);
        double db = std::stod(sb);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else {
        throw std::runtime_error("Invalid type");
    }
}

int main() {
    boost::any a, b;
    // input
    std::cout << "Enter value for a: ";
    if (std::cin >> a) {
        // Check if the input is valid (not end of file)
        if (!a.empty()) {
            std::cout << "Enter value for b: ";
            if (std::cin >> b) {
                boost::any result = compare_one(a, b);
                if (boost::any_cast<std::string>(result) == "None") {
                    std::cout << "Both values are equal." << std::endl;
                } else {
                    std::cout << "Result: " << boost::any_cast<std::string>(result) << std::endl;
                }
            } else {
                // End of file, so the input for b was not provided
                if (a.empty()) {
                    std::cout << "Both values are empty." << std::endl;
                } else {
                    boost::any result = compare_one(a, a);
                    if (boost::any_cast<std::string>(result) == "None") {
                        std::cout << "Value for a is less than value for b." << std::endl;
                    } else {
                        std::cout << "Result: " << boost::any_cast<std::string>(result) << std::endl;
                    }
                }
            }
        } else {
            // The input stream is empty, so it was not provided
            if (std::cin.peek() == '\n') {
                std::cout << "Both values are empty." << std::endl;
            } else {
                boost::any result = compare_one(a, a);
                if (boost::any_cast<std::string>(result) == "None") {
                    std::cout << "Value for a is less than value for b." << std::endl;
                } else {
                    std::cout << "Result: " << boost::any_cast<std::string>(result) << std::endl;
                }
            }
        }
    } else {
        // The input stream has reached the end
        if (std::cin.peek() == '\n') {
            std::cout << "Both values are empty." << std::endl;
        } else {
            boost::any result = compare_one(a, a);
            if (boost::any_cast<std::string>(result) == "None") {
                std::cout << "Value for a is less than value for b." << std::endl;
            } else {
                std::cout << "Result: " << boost::any_cast<std::string>(result) << std::endl;
            }
        }
    }

    return 0;
}