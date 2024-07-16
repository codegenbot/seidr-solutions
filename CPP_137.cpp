#include <boost/any.hpp>
#include <string>
#include <cassert>

boost::any compare_one(const std::string& a, const std::string& b) {
    return a;
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");
    return 0;
}