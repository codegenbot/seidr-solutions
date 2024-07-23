```c
#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::string heightStartStr, heightFirstBounceStr;
    std::string numBouncesStr;

    std::cin >> heightStartStr >> heightFirstBounceStr >> numBouncesStr;

    double heightStart = std::stod(heightStartStr);
    double heightFirstBounce = std::stod(heightFirstBounceStr);
    int numBounces = std::stoi(numBouncesStr);

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        double height = heightStart * pow(bouncinessIndex, 2*i);
        totalDistance += height - heightStart;
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << totalDistance;

    return 0;