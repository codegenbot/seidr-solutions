```cpp
#include <iostream>
#include <string>

int solve(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);
    int result = solve(s); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}