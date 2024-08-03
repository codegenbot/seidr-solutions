#include <algorithm>
#include <string>
#include <iostream>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string temp_s0 = s0;
    std::sort(temp_s0.begin(), temp_s0.end());
    
    std::string temp_s1 = s1;
    std::sort(temp_s1.begin(), temp_s1.end());
    
    return temp_s0 == temp_s1;
}

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    
    bool result = same_chars(str1, str2);
    
    std::cout << (result ? "Strings have same characters." : "Strings do not have same characters.") << std::endl;
    
    return 0;
}