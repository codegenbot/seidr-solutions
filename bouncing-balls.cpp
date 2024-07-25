#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, 2)) * pow(2 * startingHeight + 0.0, numBounces);

    cout.precision(4);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}