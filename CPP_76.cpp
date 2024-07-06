```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    return pow(n, log(x) / log(n)) == x;
}

int main() {
    bool isSimplePower = is_simple_power(8, 2);
    std::cout << "Is power: " << (isSimplePower ? "True" : "False") << std::endl;

    return 0;
}