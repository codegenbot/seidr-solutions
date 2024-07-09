```cpp
#include <iostream>

int findGCD(int a, int b) {
    if (b == 0) return std::abs(a);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(b); 
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    int result = findGCD(a, b);
    std::cout << "The GCD is: " << result << std::endl;
    return 0;
}