#include <any>
#include <string>
#include <typeinfo>
#include <boost/any.hpp> // Include boost for boost::any_cast

// Declare missing function
boost::any compare_one(const std::any& a, const std::any& b) {
    // Add your comparison logic here
}

if (a.type() == b.type()) {
    if (a.type() == typeid(int) && std::any_cast<int>(a) != std::any_cast<int>(b)) {
        return (std::any_cast<int>(a) > std::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && std::any_cast<float>(a) != std::any_cast<float>(b)) {
        return (std::any_cast<float>(a) > std::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && std::any_cast<std::string>(a) != std::any_cast<std::string>(b)) {
        return (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) ? a : b;
    }
}
return "None";