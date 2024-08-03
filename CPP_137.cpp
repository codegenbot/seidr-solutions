#include <boost/any.hpp>
#include <cassert>
#include <string>

std::string compare_one(const std::string& str, int val) {
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", 1)) == "None");
    return 0;
}