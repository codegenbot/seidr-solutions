```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string res = "";
    for (int i = 0; i < s.size(); i++) {
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
        if (str.back() == '\n') str.pop_back();
        std::string res = anti_shuffle(str);
        std::cout << "Anti-Shuffled String: " << res << std::endl;
    }
    return 0;
}