#include <boost/any.hpp>
#include <string>

std::string compare_one(std::string str, int num) {
    if (num == 1) {
        return std::string("None");
    }
    return std::string("");
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}