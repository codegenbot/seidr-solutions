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

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (2 * startHeight * (1 - pow(bouncinessIndex, i)));
    }

    cout << fixed << setprecision(5);
    long double finalTotalDistance = static_cast<long double>(totalDistance);
    cout << finalTotalDistance << "\n";

    return 0;
}