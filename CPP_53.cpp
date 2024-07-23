#include <iostream>
int add() {
    int x, y;
    std::cin >> x >> y;
    return x + y;
}

int main() {
    assert (add() == 4);
    return 0;
}