#include <iostream>
#include <string>
#include <cassert>

int myStrlen(std::string str){
    return str.size();
}

int main(){
    assert (myStrlen("asdasnakj") == 9);
    return 0;
}