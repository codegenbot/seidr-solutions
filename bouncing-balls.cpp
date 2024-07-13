#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::string startHeightStr;
    std::cin >> startHeightStr;

    double startHeight = stod(startHeightStr);

    std::string firstBounceStr;
    std::cin >> firstBounceStr;

    double firstBounce = stod(firstBounceStr);

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces; 
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex; 
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
    }

    std::cout << std::fixed << std::setprecision(5) << totalDistance << "\n";
    return 0;
}