#include <boost/any.hpp>
#include <string>
#include <algorithm>
#include <cassert>

template <typename T>
boost::any compare_one(T a, T b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return std::string("None");
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");
    assert(boost::any_cast<int>(compare_one(3, 2)) == 3);
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");

    return 0;
}