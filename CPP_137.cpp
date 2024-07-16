#include <string>
#include <cassert>
#include <boost/any.hpp> // Include boost/any.hpp

boost::any compare_one(const std::string& a, const std::string& b) {
    if (a == b) {
        return "Equal";
    } else {
        return "Not Equal";
    }
}

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", "1")) == "Equal");
    assert(boost::any_cast<std::string>(compare_one("1", "2")) == "Not Equal");

    std::string result = boost::any_cast<std::string>(compare_one(std::to_string(1), std::to_string(1)));
    assert(result == "Equal");

    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "Not Equal");

    return 0;
}