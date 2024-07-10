#include <cassert>
#include <string>
#include <vector>
#include <iostream>

int solve(std::string s) {
    if (s.empty()) {
        return 0;
    }
    int count = 0;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    assert(solve("aAeEiIoUu") == 6);
    std::cout << solve("#ccc") << std::endl;
    return 0;
}