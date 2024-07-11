#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    std::cin >> startHeight >> heightAfterFirstBounce;
    double bounciness = pow(heightAfterFirstBounce / startHeight, 0.5);
    int numBounces;
    std::cin >> numBounces;

    double distanceTraveled = 2 * (startHeight + heightAfterFirstBounce) * (1 - pow(bounciness, numBounces));
    std::cout << std::fixed << std::setprecision(15) << "Total Distance Travelled: " << distanceTraveled;
}