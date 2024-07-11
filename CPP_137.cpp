#include <iostream>
#include <vector>
#include <boost/any.hpp>

boost::any compare_one(boost::any a, int b) {
    if (b == 1)
        return "One";
    else
        return "None";
}

int main() {
    std::cout << boost::any_cast<std::string>(compare_one(boost::any(std::string("1")), 1)) << std::endl;
    return 0;
}