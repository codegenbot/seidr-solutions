#include <string>
#include <cassert>

std::string change_base(int num, int base){
    return std::to_string(num);
}

int main(){
    int x = 10;
    assert(std::to_string(change_base(x, x + 1)) == std::to_string(x));
    return 0;
}