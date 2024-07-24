#include <string>
#include <cassert>

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    assert(change_base(10, 2) == "1010");
    assert(change_base(16, 16) == "10");
    assert(change_base(255, 8) == "377");
    assert(change_base(100, 10) == "100");
    return 0;
}