```cpp
#include <iostream>
#include <string>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return !result.empty() ? result : s;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    while (true) {
        char c = std::cin.get();
        if (c == '\n' || c == EOF) {
            break;
        }
        s += c;
    }
    size_t i = s.size() - 1;
    while (i >= 0 && isspace(s[i])) {
        --i;
    }
    s.resize(i + 1);
    std::string result = solve(s);
    std::cout << "Result: " << result << std::endl;
    return 0;
}