#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = (startingHeight + firstBounceHeight) * numBounces;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += firstBounceHeight * pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    double totalDistance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    cout << totalDistance << endl;
    return 0;
}