#include <iostream>
#include <string>

int prod_signs(std::string str1, std::string str2, std::string str3) {
    int num1 = stoi(str1), num2 = stoi(str2), num3 = stoi(str3);
    
    if ((num1 < 0 && (num2 < 0 || num3 < 0)) || (num2 < 0 && num3 < 0))
        return -1;
    else
        return 1;
}

int main() {
    std::cout << prod_signs("-1", "1", "1") << std::endl; 
}