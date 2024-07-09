#include <iostream>
#include <string>
#include <algorithm>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    for (auto& s : {str1, str2, str3}) {
        std::transform(s.begin(), s.end(), s.begin(),
            [](unsigned char c){ return std::isupper(c) ? std::tolower(c) : std::toupper(c); });
        
        if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z')) {
            s[0] = std::toupper(s[0]);
        }
        
        if ((s[0] == '-' || s[0] == ' ') && s.length() > 1) {
            s = s.substr(1);
        }
    }
    
    if (str1.empty() || str2.empty() || str3.empty()) return 0;
    if (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') return -1;
    return 1;
}

int main() {
    std::cout << prod_signs("1", "1", "-1") << std::endl; 
}