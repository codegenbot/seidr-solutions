#include <boost/any.hpp>
#include <iostream>
#include <string>

std::string compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return boost::any_cast<int>(a);
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return boost::any_cast<int>(b);
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return boost::any_cast<float>(a);
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return boost::any_cast<float>(b);
        } else {
            return "None";
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float num_a = std::stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        float num_b = std::stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        if (num_a > num_b) {
            return boost::any_cast<std::string>(a);
        } else if (num_a < num_b) {
            return boost::any_cast<std::string>(b);
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}

int main() {
    // Main function implementation
    return 0;
}