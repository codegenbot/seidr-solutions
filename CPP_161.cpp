```cpp
#include <iostream>
#include <string>

int solve(std::string s) {
    for (char &c : s) {
        c = std::tolower(c);
    }
    return s.length();
}

int main() {
    std::cout << solve("#ccc") << std::endl;
    assert(solve("#ccc") == 3);
    return 0;
}