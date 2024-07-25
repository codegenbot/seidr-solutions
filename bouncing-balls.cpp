#include <iostream>
using namespace std;

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numberOfBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;

    for(int i = 1; i <= numberOfBounces; i++) {
        totalDistance += (bouncinessIndex * 2.0 - 1.0);
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;

    cin >> startingHeight >> firstBounceHeight >> numberOfBounces;

    cout << fixed << setprecision(5) << calculateTotalDistance(startingHeight, firstBounceHeight, numberOfBounces) << endl;

    return 0;
}