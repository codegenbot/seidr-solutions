#include <iostream>
#include <string>
#include <cassert>

int strlen(const std::string& str){
    return str.size();
}

int main(){
    assert (strlen("asdasnakj") == 9);
    return 0;
}