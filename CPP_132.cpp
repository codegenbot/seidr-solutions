#include <iostream>
#include <string>
#include <cassert>

bool is_nested(std::string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count > 0 && count < str.length()){
            return true;
        }
    }
    return false;
}

int main(){
    assert(is_nested("[]") == false);
    assert(is_nested("[[") == true);
    assert(is_nested("]]]]]]]]") == false);
    
    std::cout << "All tests passed successfully." << std::endl;
    
    return 0;
}