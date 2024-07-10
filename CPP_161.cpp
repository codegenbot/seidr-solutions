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
        if (c == '\n')
            break;
        s += c;
    }
    s.erase(s.size()-1); // remove newline character
    std::string result = solve(s);
    std::cout << "Result: " << result << std::endl;
    return 0;
}