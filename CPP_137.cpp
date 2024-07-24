#include <any>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    // Given implementation remains the same
}

int main() {
    assert(std::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
    return 0;
}