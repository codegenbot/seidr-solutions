#include <iostream>
#include <string>

bool is_happy(const std::string& s){
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
    std::cout << is_happy("abcde") << std::endl; // Test case 1
    std::cout << is_happy("hello") << std::endl; // Test case 2
    std::cout << is_happy("world") << std::endl; // Test case 3

    return 0;
}