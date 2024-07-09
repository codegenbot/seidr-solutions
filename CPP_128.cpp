#include <iostream>
#include <string>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    if (str1[0] == '-' || str2[0] == '-' || str3[0] == '-') return -1;
    if (str1.length() == 0 || str2.length() == 0 || str3.length() == 0) return 0;
    return 1;
}

int main() {
    std::cout << prod_signs("-1", "1", "1") << std::endl; 
}