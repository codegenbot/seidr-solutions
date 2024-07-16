#include <iostream>
#include <any>
#include <algorithm>
#include <cassert>
#include <string>
#include <boost/any.hpp>

using std::any;
using std::string;

any compare_one(any a, any b) {
    // Existing code
}

int main() {
    assert(boost::any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    
    std::cout << "All test cases passed!" << std::endl;

    return 0;
}