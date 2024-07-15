#include <boost/any.hpp>
#include <cassert>
#include <algorithm>

template <typename T>
boost::any compare_one(const T& a, const T& b) {
    if (a == b) return boost::any("None");
    return (a > b) ? boost::any(a) : boost::any(b);
}

boost::any compare_one(const int& a, const std::string& b) {
    std::string str = std::to_string(a);
    if (str == b) return boost::any("None");
    return (std::stof(str) > std::stof(b)) ? boost::any(str) : boost::any(a);
}

boost::any compare_one(const std::string& a, const int& b) {
    std::string str = std::to_string(b);
    if (a == str) return boost::any("None");
    return (std::stof(a) > b) ? boost::any(a) : boost::any(b);
}

int main() {
    assert (boost::any_cast<std::string>(compare_one("1", "1")) == "None");
    assert (boost::any_cast<float>(compare_one(3.5, 2.5)) == 3.5);
    assert (boost::any_cast<int>(compare_one(5, 8)) == 8);
    
    return 0;
}