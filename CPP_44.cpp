#include <string>
#include <cassert>

std::string change_base(int num, int base){
    return std::to_string(num);
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == change_base(x, 10));
    return 0;
}