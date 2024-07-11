#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    std::cin >> startHeight >> heightAfterFirstBounce;
    double bouncinessIndex = pow(heightAfterFirstBounce / startHeight, 0.5);
    // ...
}