#include <iostream>
#include <any>
#include <string>
#include <cassert>
#include <boost/any.hpp>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    // Your existing comparison logic here
}

int main() {
    assert(std::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
    return 0;
}