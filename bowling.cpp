#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    int i = 0;
    int total = 0;

    std::cin >> s;

    total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0') : (s[i + 2] == '-' ? 0 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0'))));

    std::cout << "Total score: " << total << std::endl;
    return 0;
}