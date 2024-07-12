#include <iostream>
#include <string>
#include <cassert>

boost::any compare_one(boost::any a, boost::any b) {
    // Modify the comparison logic here
    if (boost::any_cast<std::string>(a) == boost::any_cast<std::string>(b)) {
        return boost::any("Equal");
    } else {
        return boost::any("Not Equal");
    }
}

int main() {
    assert(boost::any_cast<const char*>(compare_one(std::string("1"), std::string("1")).c_str()) == typeid(const char*));
    return 0;
}