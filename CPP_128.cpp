```cpp
#include <cassert>
#include <iostream>
#include <cctype>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    for (auto& s : {str1, str2, str3}) {
        std::string temp;
        for (char c : s) {
            if (std::isalpha(c) || c == ' ') {
                temp += c;
            }
        }
        if (!s.empty()) {
            s = temp;
        }
    }

    return (str1.empty() || str2.empty() || str3.empty()) ? 0 : (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') ? -1 : 1;
}

int main() {
    assert(prod_signs("-1", "1", "1") == 0);
    std::cout << prod_signs("1", "-1", "1") << std::endl; 
}