```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string res = s; // Initialize res as a copy of s.
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 != 0) {
            res[i] = s[i];  
        }
    }
    return res;
}

int main() {
    std::string& res = anti_shuffle(std::string()); // Change to 'std::string& res = anti_shuffle(str);'
    std::cout << "Enter a string: ";
    std::string str; 
    std::getline(std::cin, str);  
    std::cout << "Anti-Shuffled String: " << res << std::endl;
    return 0;
}