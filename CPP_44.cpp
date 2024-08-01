#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int num, int base){
    return std::to_string(num);
}

int main(){
    int x = 42;
    std::cout << std::to_string(x) << std::endl;
    return 0;
}