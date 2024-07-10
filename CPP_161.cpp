#include <cassert>
#include <string>
#include <vector>
#include <iostream>

int solve(std::string s) {
    if (s.empty()) {
        return 0;
    }
    std::string v;
    for (char c : s) {
        if (std::isalpha(std::tolower(c))) {
            v += std::tolower(c);
        }
    }
    return v.size();
}

int main() {
    assert(solve("aAeEiIoUu") == 6);
    std::cout << solve("#ccc").size() << std::endl;
    return 0;
}