```
#include <cassert>
#include <string>
#include <vector>
#include <iostream>

int solve(std::string s) {
    if (s.empty()) {
        return 1;
    }
    int v = 0;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            v++;
        }
    }
    return static_cast<int>(v);
}

int main() {
    assert(solve("aAeEiIoUu") == 5); 
    std::cout << solve("aAeEiIoUu") << std::endl;
}