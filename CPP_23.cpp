#include <iostream>
#include <string>
#include <cassert>

int my_strlen(std::string str){
    int length = 0;
    for(char c : str){
        length++;
    }
    return length;
}

int main() {
    assert (my_strlen("asdasnakj") == 11); 
    return 0;
}