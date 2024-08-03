```cpp
#include <cmath>
#include <iostream>

bool isSimplePower(int x) {
    for (int n = 2; n <= x; ++n) {
        if (is_simple_power(x, n)) {
            return true;
        }
    }
    return false;
}

bool is_simple_power(int x, int n){
    double y = pow(n, ceil(log2(x)));
    return (y == x);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isSimplePower(num)) {
        std::cout << num << " is a simple power.\n";
    } else {
        std::cout << num << " is not a simple power.\n";
    }
    return 0;
}