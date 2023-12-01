#include <iostream>
#include <string>
#include <cassert>

int getLength(const std::string& str){
    return str.length();
}

int main(){
    assert (getLength("asdasnakj") == 9);
    // rest of your code
    return 0;
}