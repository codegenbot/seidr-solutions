#include <iostream>
#include <algorithm>

std::string solve(const std::string& s) {
    std::string result = s;
    for (auto& c : result) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases here
    return 0;
}