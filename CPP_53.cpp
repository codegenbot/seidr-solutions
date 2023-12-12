#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    assert (add(x, y) == x + y);
    return 0;
}

int add(int a, int b){
    return a + b;
}