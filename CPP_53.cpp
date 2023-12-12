#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;
    return 0;
}