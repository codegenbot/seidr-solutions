#include <iostream>
#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int x = round(pow(abs(a), 1.0/3));
    return a == x * x * x;
}

int main() {
    assert(iscuber(1729) == false);
    // Additional test cases can be added here
    return 0;
}