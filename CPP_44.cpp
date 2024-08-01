#include <string>
#include <cassert>

std::string change_base(int x, int base){
    // Add logic to change base here
    return std::to_string(x);
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == change_base(x, 10)); 
    return 0;
}