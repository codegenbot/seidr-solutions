```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string res = ""; // Initialize res as an empty string.
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 != 0) {
            res += s[i];  
        }
    }
    return res;
}

std::string str; 
std::cout << "Enter a string: ";
std::getline(std::cin, str);  
std::string res = anti_shuffle(str);
std::cout << "Anti-Shuffled String: " << res << std::endl;