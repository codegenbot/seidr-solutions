#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (const std::string& s : strings) {
        result += s;
    }
    return result;
}

int main() {
    // Add your test cases here
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");

    return 0;
}