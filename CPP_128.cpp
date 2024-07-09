#include <iostream>
#include <string>
#include <vector>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    for (auto& s : {str1, str2, str3}) {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        
        if ((s[0] == '-' || s[0] == ' ') && s.length() > 1) {
            size_t i = 0;
            if (s.length() > 1) {
                while (i < s.size()) {
                    if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
                        break;
                    }
                    ++i;
                }
                s.erase(0, i);
            }
        }
    }
    
    if (str1.empty() || str2.empty() || str3.empty()) return 0;
    if (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') return -1;
    return 1;
}

int main() {
    std::vector<std::string> signs = {"-" + std::to_string(-1), "1", "1"};
    assert(prod_signs(signs[0], signs[1], signs[2]) == 0);
    std::cout << prod_signs(signs[0], signs[1], signs[2]) << std::endl; 
}