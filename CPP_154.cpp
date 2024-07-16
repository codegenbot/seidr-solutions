#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    std::string temp = a + a;
    if (temp.find(b) != std::string::npos) {
        return true;
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    // Add more test cases if needed
}