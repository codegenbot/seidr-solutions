#include <iostream>
#include <cmath>

int main() {
    double startHeight, actualStartHeight;

    // Get the input values from user
    std::cin >> startHeight >> actualStartHeight;
    
    double actualBouncinessIndex = (actualStartHeight / startHeight);

    double totalDistance = (pow(2, actualBouncinessIndex) - 1) * actualBouncinessIndex * startHeight;

    return 0;
}