#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int startHeight, firstBounce, numBounces;
    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double heightAfterBounce = startHeight * pow(bouncinessIndex, i);
        totalDistance += abs(startHeight - heightAfterBounce);
        startHeight = heightAfterBounce; 
    }

    cout << fixed << setprecision(5) << totalDistance << "\n";
    return 0;
}