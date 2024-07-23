#include <iostream>
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    int result = add(x, y);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}