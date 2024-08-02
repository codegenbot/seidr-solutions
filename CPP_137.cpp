#include <boost/any.hpp>
#include <string>
#include <typeinfo>
#include <cassert>  

template <typename T>
boost::any compare_one(T a, T b) {
    if (a == b) {
        return boost::any("None");
    } else {
        return (a > b) ? boost::any(a) : boost::any(b);
    }
}

boost::any compare(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && boost::any_cast<int>(a) != boost::any_cast<int>(b)) {
            return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
        } else if (a.type() == typeid(float) && boost::any_cast<float>(a) != boost::any_cast<float>(b)) {
            return (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
        } else if (a.type() == typeid(std::string) && boost::any_cast<std::string>(a) != boost::any_cast<std::string>(b)) {
            return (std::stof(boost::any_cast<std::string>(a)) > std::stof(boost::any_cast<std::string>(b))) ? a : b;
        }
    }
    return boost::any("None");  
}

int main() {
    assert(std::any_cast<std::string>(compare(std::string("1"), std::string("1"))) == "None");
    return 0;
}