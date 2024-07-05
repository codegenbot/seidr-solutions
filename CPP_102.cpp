#include <cassert>
#include <iostream>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << choose_num(x, y) << std::endl;
    return 0;
}