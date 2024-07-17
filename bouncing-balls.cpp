#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.5 * (startHeight + firstBounce);
    for(int i = 1; i < numBounces; i++) {
        totalDistance += bouncinessIndex * pow(2, -i);
    }

    cout << fixed << setprecision(4) << totalDistance;

    return 0;
}