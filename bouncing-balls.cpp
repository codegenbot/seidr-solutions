```
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce - startHeight) / startHeight;

    double lastHeight = firstBounce;
    totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += lastHeight + pow(2, i-1) * bouncinessIndex;
        lastHeight /= 2.0;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}