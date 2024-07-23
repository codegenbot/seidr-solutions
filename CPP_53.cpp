```
#include <iostream>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    assert(add(x, y) == x + y);
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;
    return 0;
}