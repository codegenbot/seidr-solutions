#include <iostream>
int add() {
    int x, y;
    std::cin >> x >> y;
    return x + y;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    assert(add() == x + y);
    return 0;
}