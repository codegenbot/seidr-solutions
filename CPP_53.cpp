#include <iostream>
#include <string>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << std::to_string(add(x, y)) << std::endl; 
    return 0;
}