#include <iostream>
#include <string>

int myStrlen(std::string str){
    return str.length();
}

int main(){
    assert(myStrlen("asdasnakj") == 9);
    return 0;
}