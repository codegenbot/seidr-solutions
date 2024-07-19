#include <boost/any.hpp>
#include <cassert>
#include <string>
#include <iostream>

using namespace std;

// Define the compare_one function with correct return type and signature
boost::any compare_one(boost::any a, boost::any b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string)) {
        float valA = stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        float valB = stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? a : valA < valB ? b : "None";
    } else if ((a.type() == typeid(int) && b.type() == typeid(std::string))
               || (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        float valA = a.type() == typeid(int) ? boost::any_cast<int>(a) : stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        float valB = b.type() == typeid(int) ? boost::any_cast<int>(b) : stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? a : valA < valB ? b : "None";
    }

    // Return a valid result or raise an error
    return "Error: Invalid types";
}