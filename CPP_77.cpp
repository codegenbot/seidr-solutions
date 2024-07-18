#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int b = round(cbrt(a));
    return b * b * b == a;
}

int main() {
    assert(iscuber(1729) == false);
    return 0;
}