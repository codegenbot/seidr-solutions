```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1) {
            res += s[i];
        }
    }
    return res;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);  
    if (!str.empty()) {
        std::string res = anti_shuffle(str);
        if (!res.empty()) {
            std::cout << "Anti-Shuffled String: " << res << std::endl;
        }
    }
    return 0;
}