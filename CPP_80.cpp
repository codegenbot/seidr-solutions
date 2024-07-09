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
    std::cout << std::boolalpha;
    std::cout << is_happy("abc") << std::endl; // Should output true
    std::cout << is_happy("aba") << std::endl; // Should output false
    std::cout << is_happy("hello") << std::endl; // Should output true
    return 0;
}