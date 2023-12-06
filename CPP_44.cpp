#include <iostream>
#include <cassert>
using namespace std;

int change_base(int x, int base) {
    assert(x >= 0);
    return (x == 0) ? "0" : to_string(x);
}

int main() {
    for (int i = 0; i <= 100; i++) {
        cout << change_base(i, 2) << endl;
    }
    return 0;
}