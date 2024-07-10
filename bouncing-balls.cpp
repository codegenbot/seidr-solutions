#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = (1 - pow(bouncinessIndex, 2)) * (startingHeight + firstBounceHeight) * (1 - pow(bouncinessIndex, 2)) * (numBounces + 1);

    cout.precision(10);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}