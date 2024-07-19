#include <boost/any.hpp>
#include <cassert>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
T compare_any(const boost::any& a, const boost::any& b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? boost::any_cast<int>(a) : boost::any_cast<int>(b);
    } else if (a.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? boost::any_cast<float>(a) : boost::any_cast<float>(b);
    } else if (a.type() == typeid(std::string)) {
        float valA = std::stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
        float valB = std::stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? boost::any_cast<std::string>(a) : boost::any_cast<std::string>(b);
    } else {
        return T();
    }
}

int main() {
    boost::any a = 10;
    boost::any b = 20;
    
    std::cout << boost::any_cast<int>(compare_any<int>(a, b)) << std::endl;

    return 0;
}