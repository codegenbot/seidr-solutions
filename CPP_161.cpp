```cpp
#include <iostream>
#include <string>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
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
    if (result.empty()) {
        std::cout << "No vowels found in the input." << std::endl;
    } else {
        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}