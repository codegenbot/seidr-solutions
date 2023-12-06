#include <iostream>
#include <cassert>
using namespace std;

std::string change_base(int x, int base) {
    return (x == 0) ? "0" : std::to_string(x);
}

int main() {
    for (int i = 0; i <= 100; i++) {
        cout << change_base(i, 2) << endl;
    }
    return 0;
}