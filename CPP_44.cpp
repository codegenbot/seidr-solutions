#include <iostream>
#include <cassert>
using namespace std;

int change_base(int x, int base) {
    if (x == 0) return "0";
    else return to_string(x);
}

int main() {
    for (int i = 0; i <= 100; i++) {
        cout << change_base(i, 2) << endl;
    }
    return 0;
}