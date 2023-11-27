#include <string>

bool cycpattern_check(std::string a, std::string b) {
    if (a.length() < b.length()) {
        return false;
    }

    std::string concatenated = a + a;

    return concatenated.find(b) != std::string::npos;
}

int main() {
    // test cases
    assert(cycpattern_check("winemtt", "tinem") == true);
    assert(cycpattern_check("abcdefg", "cdefg") == true);
    assert(cycpattern_check("hello", "world") == false);

    return 0;
}