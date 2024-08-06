#include <iostream>
#include <cstdlib>
#include <cassert>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int result = add(a, b);
    std::cout << "Result of adding " << a << " and " << b << " is: " << result << std::endl;
    
    return 0;
}