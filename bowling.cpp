#include <iostream>
#include <string>

int main() {
    std::string s = "INSERT_INPUT_STRING_HERE"; // Initialize s with your input string
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        total += 10 + ((s[i + 1] == 'X') ? (10 + ((s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0))) : ((s[i + 2] == '/') ? 10 : (s[i + 1] == '/' ? (10 - (s[i + 2] - '0')) : (isdigit(s[i + 1]) ? (s[i + 1] - '0') : 0)));
    }
    std::cout << total << std::endl;
    return 0;
}