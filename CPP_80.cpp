#include <iostream>
#include <string>

bool is_happy(std::string s){
    if(s.length() < 3)
        return false;
    
    for(int i = 0; i < s.length() - 2; i++){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2])
            return false;
    }
    
    return true;
}

int main() {
    // Test cases
    std::cout << is_happy("abc") << std::endl;  // Expected output: 1 (true)
    std::cout << is_happy("aab") << std::endl;  // Expected output: 0 (false)
    std::cout << is_happy("xyz") << std::endl;  // Expected output: 1 (true)
    std::cout << is_happy("aabbcc") << std::endl;  // Expected output: 0 (false)
    
    return 0;
}