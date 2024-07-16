#include <cassert>
#include <boost/any.hpp>
#include <string>

boost::any compare_one(const std::string &a, const std::string &b) {
    return b;
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "2");

    return 0;
}