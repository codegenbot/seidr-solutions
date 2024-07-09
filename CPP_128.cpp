```cpp
#include <iostream>
#include <string>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    for (auto& s : {str1, str2, str3}) {
        for (size_t i = 0; i < s.size(); ++i) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                s[i] = std::toupper(s[i]);
            }
        }
        
        if ((str1[0] == '-' || str1[0] == ' ') && str1.length() > 1) {
            str1 = str1.substr(1);
        }
        if ((str2[0] == '-' || str2[0] == ' ') && str2.length() > 1) {
            str2 = str2.substr(1);
        }
        if ((str3[0] == '-' || str3[0] == ' ') && str3.length() > 1) {
            str3 = str3.substr(1);
        }

    }
    
    if (str1.empty() || str2.empty() || str3.empty()) return 0;
    if (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') return -1;
    return 1;
}

int main() {
    std::cout << prod_signs("1", "1", "-1") << std::endl; 
}