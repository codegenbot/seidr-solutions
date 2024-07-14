#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1) * (startingHeight + (firstBounceHeight - startingHeight) * pow(bouncinessIndex, i));
    }

    cout.precision(6);
    cout << fixed;
    cout << setprecision(3) << totalDistance << endl;

    return 0;
}