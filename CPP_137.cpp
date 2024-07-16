#include <string>
#include <cassert>
#include <boost/any.hpp> // Include boost/any.hpp

std::string compare_one(const std::string& a, const std::string& b) {
    if (a == b) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}

int main() {
    assert(compare_one("1", "1") == "Equal");
    assert(compare_one("1", "2") == "Not Equal");

    std::string result = compare_one(std::to_string(1), std::to_string(1));
    assert(result == "Equal");

    // Change the second argument to std::string
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");

    return 0;
}