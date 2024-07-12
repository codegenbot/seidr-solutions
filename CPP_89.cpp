```cpp
#include <iostream>
#include <string>

std::string encrypt(const std::string& s) {
    for (char &c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
    }
    return s;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::string result = encrypt(s);
    // Add your code here
    std::cout << result << std::endl;
}