#include <iostream>
#include <string>

int my_strlen(std::string str){
    return str.length();
}

int main(){
    std::cout << my_strlen("asdasnakj") << std::endl;
    return 0;
}