#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << add(a, b) << std::endl;
    
    return 0;
}