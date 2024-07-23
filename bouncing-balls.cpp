```
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
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (heightFirstBounce - 0.5 * heightStart) * pow(bouncinessIndex, 2*i);
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}