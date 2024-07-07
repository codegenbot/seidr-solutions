#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    double currentHeight = firstBounceHeight;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= 2;
        currentHeight *= pow(0.5, i);
    }

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance + firstBounceHeight << endl;

    return 0;
}