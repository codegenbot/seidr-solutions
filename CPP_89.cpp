```
#include <iostream>
#include <string>

std::string encrypt(const std::string& s) {
    for (auto c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
    }
    return s;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << encrypt(s) << std::endl;
}