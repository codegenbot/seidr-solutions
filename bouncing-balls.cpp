#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double startHeight, bounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startHeight >> bounceHeight >> numBounces;
    bouncinessIndex = bounceHeight / startHeight;
    totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (startHeight + ((i + 1) * bouncinessIndex));
    }
    cout << fixed << setprecision(8) << totalDistance << endl;
    return 0;
}