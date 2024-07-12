#include <algorithm>
#include <string>
#include <cctype>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << solve(input);
    return 0;
}