#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int startHeight, firstBounce;
    double numBounces;
    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    double heightAfterBounce = firstBounce;
    for (int i = 1; i <= (int)numBounces; ++i) {
        heightAfterBounce = firstBounce * pow(bouncinessIndex, i);
        totalDistance += abs(heightAfterBounce);
    }

    cout << fixed << setprecision(5) << totalDistance << "\n";
    return 0;
}