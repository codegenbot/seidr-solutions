```c
#include <cassert>
#include <string>
#include <vector>
#include <iostream>

std::string solve(std::string s) {
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
    return (v > 0 ? "a" : "");
}

int main() {
    assert(solve("aAeEiIoUu") == "a");
    std::cout << solve("#ccc").size() << std::endl;
    return 0;
}