#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    std::cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double distanceTravelled = 0.0; // initialize distance traveled
    for (int i = 1; i <= numBounces; ++i) {
        distanceTravelled += (startHeight * pow(2, 0.5)) * pow(0.5, i - bouncinessIndex);
    }

    std::cout << std::fixed << std::setprecision(10); // adjust precision
    std::cout << distanceTravelled << std::endl;

    return 0;
}