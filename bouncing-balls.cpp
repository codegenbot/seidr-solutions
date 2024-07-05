```
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce, numBounces;
    cin >> ws >> startHeight >> ws >> firstBounce >> ws >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}