#include <boost/any.hpp>
#include <string>

boost::any compare_one(std::string str, int val) {
    if (str == "1") {
        return boost::any(val);
    }
    else {
        return boost::any(std::string("None"));
    }
}

int main() {
    assert (boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}