#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // calculate total distance
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout.precision(6); // to ensure 6 decimal places in output
    cout << fixed << totalDistance << endl;

    return 0;
}