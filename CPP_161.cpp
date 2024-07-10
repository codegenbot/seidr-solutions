```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cassert>

int solve(std::string s) {
    std::vector<char> v;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            v.push_back(std::tolower(c));
        }
    }
    return v.size();
}

int main() {
    assert(solve("aAeEiIoUu") == 6);
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = solve(input);
    std::cout << "Number of vowels in the entered string is: " << result << std::endl;
    return 0;
}