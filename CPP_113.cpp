#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> countAndConcatOdd(const std::vector<std::string>& lst) {
    std::vector<std::string> result;
    for (std::string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(countAndConcatOdd({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));

    return 0;
}