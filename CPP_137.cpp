#include <boost/any.hpp>
#include <iostream>
#include <string>
#include <cassert>
#include <string_view>

boost::any compare_one(const boost::any& a, int b) {
    return (b == 1) ? a : boost::any("None");
}

int main() {
    boost::any result = compare_one(std::string("1"), 1);

    assert(boost::any_cast<std::string>(result) == "1");

    return 0;
}