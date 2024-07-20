#include <iostream>
#include <cassert>
#include <string>

std::string change_base(int a, int b) {
    return std::to_string(a % b);
}

int main(){
    int x = 10;
    assert (change_base(x, x + 1) == std::to_string(x % (x + 1)));
    return 0;
}