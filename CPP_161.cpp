#include <iostream>
#include <algorithm>
#include <cassert>

std::string solve(const std::string& s) {
    std::string result = s;
    for (char &c : result) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (std::count_if(result.begin(), result.end(), isalpha) == 0) {
        std::reverse(result.begin(), result.end());
    }
    return result;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << solve(s) << std::endl;
    return 0;
}