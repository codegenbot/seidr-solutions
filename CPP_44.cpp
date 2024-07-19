#include <string>
#include <cassert>

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    assert(change_base(10, 2) == "1010");
    assert(change_base(15, 16) == "F");
    assert(change_base(255, 2) == "11111111");
    
    return 0;
}