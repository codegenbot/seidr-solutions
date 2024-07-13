#include <cmath>
#include <iostream>

int main() {
    int startHeight, firstBounce;
    double numBounces;
    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= (int)numBounces; ++i) {
        double heightAfterBounce = startHeight * pow(bouncinessIndex, i);
        totalDistance += abs(heightAfterBounce - startHeight);
        startHeight = heightAfterBounce; 
    }
    totalDistance += abs(startHeight - startHeight); // add the last bounce
    cout << fixed << setprecision(5) << totalDistance << "\n";
    return 0;
}