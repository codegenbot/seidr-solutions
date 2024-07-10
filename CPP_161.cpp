```cpp
#include <iostream>
#include <string>

int solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = std::tolower(s[i]);
    }
    return s.length();
}

int main() {
    std::cout << solve("#ccc") << std::endl;
    return 0;
}