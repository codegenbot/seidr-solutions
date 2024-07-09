#include <iostream>
#include <string>

bool is_happy(const std::string& s) {
    if(s.length() < 3) return false;
    for(int i = 0; i < s.length()-2; i++){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]){
            return false;
        }
    }
    return true;
}

int main() {
    std::string test_case1 = "abc";
    std::string test_case2 = "aab";
    
    std::cout << is_happy(test_case1) << std::endl; // Output: 1 (true)
    std::cout << is_happy(test_case2) << std::endl; // Output: 0 (false)
    
    return 0;
}