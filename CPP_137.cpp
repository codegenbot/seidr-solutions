#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

boost::any compare_one(const boost::any& a, int b) {
    return (b == 1) ? a : "None";
}

int main() {
    boost::any result = compare_one("1", 1);

    assert(boost::any_cast<std::string>(result) == "1");

    return 0;
}