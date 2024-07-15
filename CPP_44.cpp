#include <iostream>
#include <cassert>
#include <string>

std::string change_base(int number, int base) {
    // implementation for changing base
}

int main(){
    int x = 2;
    for(int i = 2; i <= 10; ++i){
        std::cout << "Base " << i << ": " << change_base(x, i) << '\n';
    }
    return 0;
}