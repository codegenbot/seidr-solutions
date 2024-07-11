#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    std::cin >> startHeight >> heightAfterFirstBounce;
    double bouncinessIndex = pow(heightAfterFirstBounce / startHeight, 0.5);
    double distance = startHeight * (1 + bouncinessIndex) + 
                      (startHeight - startHeight * bouncinessIndex) *
                      (pow(bouncinessIndex, 2 * (5 - 1) + 1));
    std::cout << distance;
}