#include <iostream>
#include <string> // Include the <string> header
#include <boost/any.hpp> // Include boost/any.hpp for using boost::any

template <typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return T();
}

int main() {
    assert(compare_one(boost::any_cast<std::string>("1"), std::to_string(1)).empty());

    return 0;
}