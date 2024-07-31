#include <iostream>
#include <cstring>

int my_strlen(const char* str){
    return strlen(str);
}

int main() {
    const char* input = "asdasnakj";
    std::string str(input, my_strlen(input)); 
    std::cout << my_strlen(str) << std::endl;
}