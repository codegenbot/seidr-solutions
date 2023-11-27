#include <iostream>
#include <string>
#include <cstring>

int myStrlen(std::string str){
    return str.size();
}

int main(){
    assert (std::strlen("asdasnakj") == 9);
    return 0;
}