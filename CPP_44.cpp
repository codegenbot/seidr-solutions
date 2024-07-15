#include <string>
using std::to_string;

string change_base(int x, int base){
    string result = "";
    while(x > 0){
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

#include <cassert>

int main() {
    assert(change_base(10, 2) == "1010");
    assert(change_base(15, 16) == "F");
    assert(change_base(255, 8) == "377");
    
    return 0;
}