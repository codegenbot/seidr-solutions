#include <iostream>
#include <cassert>

bool checkSumProperty(int a, int b, int c) {
    return (a == b + c || b == a + c || c == a + b);
}

bool any_int(int a, int b, int c) {
    return checkSumProperty(a, b, c);
}

int main() {
    assert(any_int(3, 4, 7) == false);

    std::cout << "Test passed successfully!" << std::endl;

    return 0;
}