#include <iostream>
#include <string>
#include <cassert>

bool is_nested(std::string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count < 0){
            return true;
        }
    }
    return false;
}

int main() {
    std::string input;
    std::cin >> input;
    
    bool result = is_nested(input);
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}