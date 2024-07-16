#include <iostream>
#include <algorithm>

std::string solve(const std::string &s) {
    std::string result = s;
    for (char &c : result) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (result.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        std::reverse(result.begin(), result.end());
    }
    return result;
}

int main() {
    assert (solve("#ccc") == "#CCC");
    return 0;
}