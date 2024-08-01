#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, i) * (1 - bouncinessIndex);
    }

    cout.precision(6); // to get the correct decimal places
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}