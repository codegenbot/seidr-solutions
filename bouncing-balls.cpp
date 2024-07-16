#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 2.0; // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * pow(bouncinessIndex, i + 1);
    }

    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}