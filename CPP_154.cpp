#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

bool test_cycpattern_check() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcd", "cdab") == true);
    assert(cycpattern_check("abcde", "deabc") == true);
    assert(cycpattern_check("12345", "54321") == false);
    return true;
}

int main() {
    if (test_cycpattern_check()) {
        std::cout << "All test cases passed." << std::endl;
    } else {
        std::cout << "Some test cases failed." << std::endl;
    }

    return 0;
}