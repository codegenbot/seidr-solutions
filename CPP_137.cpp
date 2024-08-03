#include <boost/any.hpp>
#include <string>

std::string compare_one(const std::string& s, int n) {
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}