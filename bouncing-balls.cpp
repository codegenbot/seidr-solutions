#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    double originalHeight = heightStart;
    
    for (int i = 1; i <= numBounces; i++) {
        double currentHeight = originalHeight * pow(bouncinessIndex, i);
        totalDistance += abs(currentHeight);
        originalHeight = currentHeight;
    }

    cout << std::fixed << std::setprecision(6) << totalDistance;

    return 0;
}