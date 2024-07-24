#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.5 * (startingHeight + firstBounceHeight) * (1 - pow(bouncinessIndex, 2)) * numBounces;

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}