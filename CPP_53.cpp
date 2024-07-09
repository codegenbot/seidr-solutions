```cpp
#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int sum = add(a, b);
    std::cout << "Their sum is: " << sum;
    return 0;
}