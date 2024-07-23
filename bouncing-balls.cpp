#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    if (bouncinessIndex > 1) {
        bouncinessIndex = pow(bouncinessIndex, 0.5);
        heightFirstBounce = heightStart * bouncinessIndex;
    }

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * abs((heightFirstBounce - heightStart) + (heightFirstBounce - heightStart) * bouncinessIndex));
        heightFirstBounce *= bouncinessIndex;
        heightStart = heightFirstBounce;
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}