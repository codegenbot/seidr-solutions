#include <iostream>
#include <cassert>

int add(int x, int y) {
    return x + y;
    assert(x + y == add(x, y)); 
}

int main() {
    int x, y;
    std::cin >> x >> y;
    return 0;
}