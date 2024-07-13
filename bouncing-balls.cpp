#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int startHeight, firstBounce, numBounces;
    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += abs(startHeight - firstBounce);
        startHeight *= bouncinessIndex; 
    }

    cout << fixed << setprecision(5) << totalDistance << "\n";
    return 0;
}