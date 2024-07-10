#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 2.0; // initial drop and first bounce
    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2.0 * bouncinessIndex;
    }

    cout << fixed << setprecision(4) << totalDistance;

    return 0;
}