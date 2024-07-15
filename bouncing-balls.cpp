#include <iostream>
#include <string>

int main() {
    std::string startHeightStr;
    std::string firstBounceHeightStr;
    std::string numBouncesStr;

    std::cin >> startHeightStr >> firstBounceHeightStr >> numBouncesStr;

    double startHeight = std::stod(startHeightStr);
    double firstBounceHeight = std::stod(firstBounceHeightStr);
    int numBounces = std::stoi(numBouncesStr);

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    std::cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;

    return 0;
}