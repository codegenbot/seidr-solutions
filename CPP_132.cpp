#include <iostream>
#include <string>

bool is_nested(std::string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count > 1){
            return true;
        }
    }
    return false;
}

int main(){
    // Example usage of the is_nested function
    std::cout << std::boolalpha;
    std::cout << is_nested("[[[[[]]]]]") << std::endl;
    std::cout << is_nested("]]]]]") << std::endl;
    std::cout << is_nested("[[]]") << std::endl;

    return 0;
}