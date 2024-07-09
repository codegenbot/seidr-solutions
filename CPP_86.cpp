```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string res;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            res.insert(0, 1, s[i]);  
        }
        res.erase(0, 1);
    }
    return res;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);  
    std::string res = anti_shuffle(str);
    std::cout << "Anti-Shuffled String: " << res.c_str() << std::endl;
    return 0;
}