#include <cassert>
#include <iostream>
#include <cctype>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    for (auto& s : {str1, str2, str3}) {
        if (!s.empty()) {
            size_t i = 0;
            while (i < s.size()) {
                if (!(std::isalpha(s[i]) || s[i] == ' ')) {
                    break;
                }
                ++i;
            }
            if (i > 0) {
                s.erase(0, i);
            }
        }
    }

    return (str1.empty() || str2.empty() || str3.empty()) ? 0 : (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') ? -1 : 1;
}

int main() {
    assert(prod_signs("-1", "1", "1") == 0);
    std::cout << prod_signs("-1", "1", "1") << std::endl; 
}