```cpp
#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    std::cin >> startHeight >> heightAfterFirstBounce;
    double bounciness = pow(heightAfterFirstBounce / startHeight, 0.5);
    std::cout << bounciness;
}