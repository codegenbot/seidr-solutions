#include <cassert>
#include <string>
#include <boost/any.hpp>

using namespace std;
using boost::any_cast;

boost::any compare_one(const std::string& str1, const std::string& str2) {
    if (str1 == str2) {
        return std::string("");
    } else {
        return std::string("None");
    }
}

int main() {
    assert(any_cast<std::string>(compare_one(std::string("1"), std::string("1")))== "");
    return 0;
}