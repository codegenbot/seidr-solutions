#include <string>
#include <cassert> // Include the missing header

bool cycpattern_check(std::string a, std::string b) { // Use std::string
    std::string temp = a + a; // Concatenate the string a with itself
    return temp.find(b) != std::string::npos; // Check if b is a cyclic pattern in a
}

int main() {
    assert(cycpattern_check("abc", "cab")); // Test case 1: Check cyclic pattern
}