#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << add(x, add(y, z)) << std::endl;
    return 0;
}