#include <iostream>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : "None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : "None");
    }
    if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b)) ? a : (std::stof(boost::any_cast<std::string>(a)) < std::stof(boost::any_cast<std::string>(b)) ? b : "None");
    }
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}