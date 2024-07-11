```
#include <boost/any.hpp>
#include <string>

boost::any compare_one(const std::string& s, int i) {
    if (i == 1)
        return boost::any(std::string("None"));
    else
        return boost::any(s);
}

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", 1)) == "None");
    return 0;
}