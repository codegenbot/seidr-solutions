```cpp
#include <iostream>
#include <string>
#include <algorithm>

std::string solve(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            result += (c + 3 <= 'z') ? c + 3 : ('a' + (c + 3 - 'z'));
        } else if (c >= 'A' && c <= 'Z') {
            result += (c + 3 <= 'Z') ? c + 3 : ('A' + (c + 3 - 'Z'));
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    std::string result = solve(s); 
    std::cout << "Result: " << result << std::endl;
}