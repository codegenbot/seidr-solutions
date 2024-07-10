#include <cassert>
#include <string>
#include <boost/any.hpp>

std::string compare_one(std::string str, int num) {
    if (num == 1) {
        return "None";
    }
    return "";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}