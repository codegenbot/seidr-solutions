#include <string>
#include <cctype>
#include <algorithm>

std::string solve(std::string s);

int main() {
    std::string input;
    std::cin >> input;
    std::cout << solve(input) << std::endl;
    
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
        reverse(s.begin(), s.end());
    }
    return s;
}