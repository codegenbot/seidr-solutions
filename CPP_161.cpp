#include <iostream>
#include <string>

std::string solve(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += ('a' - 'A');
        }
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    std::cout << "Test passed." << std::endl;
    return 0;
}