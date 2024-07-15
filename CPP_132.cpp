#include <iostream>
#include <string>
#include <cassert>

bool is_nested(std::string str);

int main() {
    assert(is_nested("]]]]]]]]") == false);
    return 0;
}

bool is_nested(std::string str){
    int count = 0;
    for(char c : str){
        if(c == '['){
            count++;
        } else if(c == ']' && count > 0){
            count--;
        }
    }
    return count < 0;
}