#include <cctype>
#include <algorithm>
#include <string>

std::string solve(std::string s);

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << solve(input);
    return 0;
}

std::string solve(std::string s) {
    bool hasLetter = false;
    for (char& c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
            hasLetter = true;
        }
    }
    if (!hasLetter) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}