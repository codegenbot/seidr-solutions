#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = (heightFirstBounce / heightStart);

    if(bouncinessIndex > 1.0) bouncinessIndex = 1.0;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * abs((heightFirstBounce - heightStart) + (heightFirstBounce - heightStart) * pow(bouncinessIndex, i-1)));
        heightFirstBounce = (heightStart * pow(bouncinessIndex, 0.5));
    }

    cout << fixed << setprecision(6) << totalDistance;

    return 0;
}