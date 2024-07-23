```cpp
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

int main() {
    std::string heightStartStr, heightFirstBounceStr;
    int numBounces;

    std::cin >> heightStartStr >> heightFirstBounceStr >> numBounces;

    double heightStart = stod(heightStartStr);
    double heightFirstBounce = stod(heightFirstBounceStr);

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        double height = heightStart * pow(bouncinessIndex, 2*i);
        totalDistance += height - heightStart;
    }

    std::cout << std::fixed << std::setprecision(6) << totalDistance;

    return 0;
}