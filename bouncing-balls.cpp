#include <iostream>
#include <string>
#include <cmath>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = round((firstBounceHeight / startingHeight) * 1000) / 1000;
    double totalDistance = 0;
    double height = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += height;
        height *= bouncinessIndex;
        totalDistance += height;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::string startingHeightStr, firstBounceHeightStr, numBouncesStr;
    std::cin >> startingHeightStr;
    std::cin >> firstBounceHeightStr;
    std::cin >> numBouncesStr;

    startingHeight = std::stod(startingHeightStr);
    firstBounceHeight = std::stod(firstBounceHeightStr);
    numBounces = std::stoi(numBouncesStr);

    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << distance << std::endl;

    return 0;
}