#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight + (i - 1) * bouncinessIndex);
    }
    cout << fixed << setprecision(8) << totalDistance << endl;
    return 0;
}