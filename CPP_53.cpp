#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    int result = add(x, y) * z;
    std::cout << result << std::endl;
    return 0;
}