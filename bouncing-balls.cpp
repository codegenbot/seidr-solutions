#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = 0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i) * startingHeight;
    }
    cout << fixed << setprecision(8) << totalDistance << endl;
    return 0;
}