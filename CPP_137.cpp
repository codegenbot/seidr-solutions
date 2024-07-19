#include <iostream>
#include <string>
#include <boost/any.hpp>

boost::any compare_one(const std::string& s1, const std::string& s2) {
    if (s1 == s2) {
        return boost::lexical_cast<std::string>("Equal");
    } else {
        return boost::lexical_cast<std::string>("Not equal");
    }
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "Equal");
}