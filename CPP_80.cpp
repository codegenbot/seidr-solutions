```cpp
#include <string>
#include <iostream>

bool is_happy(std::string s){
    if(s.length() < 3) return false;
    for(int i = 0; i <= s.length()-3; i++){
        std::string substr = s.substr(i, 3);
        bool unique = true;
        for(char c : substr){
            if(std::count(substr.begin(), substr.end(), c) > 1){
                unique = false;
                break;
            }
        }
        if(!unique) return false;
    }
    return true;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    if(is_happy(s)) {
        std::cout << "The string is happy" << std::endl;
    } else {
        std::cout << "The string is not happy" << std::endl;
    }
    return 0;
}