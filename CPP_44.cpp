#include <string>

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}