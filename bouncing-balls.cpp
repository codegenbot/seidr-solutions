#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (startHeight + (startHeight - firstBounceHeight) * pow(bouncinessIndex, i));
    }

    std::fixed;
    std::setprecision(6);
    cout << totalDistance << endl;

    return 0;
}