#include <boost/any.hpp>
#include <iostream>
#include <cassert>
#include <string>

boost::any compare_one(std::string s, int i) {
    // Implement the logic of your compare_one function here
    return s + std::to_string(i);
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    
    return 0;
}