#include <iostream>
#include <string>

int getLength(const std::string& str){
    return str.length();
}

int main(){
    assert (getLength("asdasnakj") == 9);
    // rest of your code logic
    return 0;
}