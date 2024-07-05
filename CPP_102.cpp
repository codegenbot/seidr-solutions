#include <iostream>

int choose_num(int x, int y) {
    if (x > y) return -1;
    for (int i = y; i >= x; --i) {
        if (i % 2 == 0) return i;
    }
    return -1;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << choose_num(x, y) << std::endl;
    return 0;
}
