#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight + (startingHeight * pow(bouncinessIndex, i));
    }
    cout << fixed << setprecision(9) << totalDistance << endl;
    return 0;
}