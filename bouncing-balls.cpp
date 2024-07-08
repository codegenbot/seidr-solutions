#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    double currentHeight = firstBounceHeight;
    totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += abs(currentHeight); // calculate absolute distance
        currentHeight *= bouncinessIndex; // update ball's height after bounce
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}