#include <cassert>
#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        res = to_string(x % base) + res;
        x /= base;
    }
    return res;
}

int main() {
    int x = 123;
    assert(change_base(x, 10) == to_string(x));
    
    return 0;
}