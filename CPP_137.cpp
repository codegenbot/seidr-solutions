#include <boost/any.hpp>
#include <cassert>
#include <string>

using namespace boost;

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b; 
    } 
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::stoi(boost::any_cast<std::string>(a)) > std::stoi(boost::any_cast<std::string>(b)) ? a : b;
    } 
    return boost::any(); // Return default-constructed boost::any for "None"
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == ""); // Use appropriate value for comparison
    return 0;
}