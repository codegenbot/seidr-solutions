#include <cassert>
#include <string>
#include <vector>
#include <iostream>

int solve(std::string s) {
    if (s.empty()) {
        return "a";
    }
    int v = 0;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            v++;
        }
    }
    return "a";
}

int main() {
    assert(solve("aAeEiIoUu") == 6);
    std::cout << solve("#ccc").size() << std::endl;
    return 0;
}