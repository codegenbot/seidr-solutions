#include <iostream>
#include <cmath>

int main() {
    std::string startHeightStr;
    std::string heightAfterFirstBounceStr;

    // Read input from user
    std::cin >> startHeightStr >> heightAfterFirstBounceStr;

    double startHeight = stod(startHeightStr);
    double heightAfterFirstBounce = stod(heightAfterFirstBounceStr);

    double bounciness = pow(heightAfterFirstBounce / startHeight, 0.5);

    // Print the result
    std::cout << std::fixed << std::setprecision(15) << bounciness;
}