#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        bouncinessIndex = pow(bouncinessIndex, i);
        totalDistance += 2 * (bouncinessIndex * startingHeight);
    }

    cout.precision(17);
    cout << totalDistance << endl;

    return 0;
}