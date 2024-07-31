#include <iostream>
#include <boost/any.hpp> // Include the <boost/any.hpp> header
#include <boost/algorithm/string.hpp> // Include the <boost/algorithm/string.hpp> header

template <typename T>
boost::any compare_one(const T& a, const T& b) {
    if (a > b) {
        return boost::any(a);
    } else if (a < b) {
        return boost::any(b);
    }
    return boost::any();
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::to_string(1))) == "None");

    return 0;
}