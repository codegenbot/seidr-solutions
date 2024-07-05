#include <iostream>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 != 0) y--;  // Make y even if it's odd
    if (y >= x) return y;
    return -1;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << choose_num(x, y) << std::endl;
    return 0;
}