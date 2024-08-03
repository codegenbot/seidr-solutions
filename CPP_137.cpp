#include <iostream>
#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
        } else if (a.type() == typeid(float)) {
            return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
        } else if (a.type() == typeid(std::string)) {
            float a_float = std::stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
            float b_float = std::stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
            return a_float > b_float ? a : b;
        }
    }
    return "None";
}

int main() {
    assert (boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");
    assert (boost::any_cast<int>(compare_one(1, 2)) == 2);
    assert (boost::any_cast<float>(compare_one(1.5f, 1.2f)) == 1.5f);
    
    return 0;
}