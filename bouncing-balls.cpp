#include <iostream>
#include <cmath>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        firstBounceHeight *= bouncinessIndex;
        totalDistance += pow(2, i - 1) * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight;
    cin >> firstBounceHeight;
    cin >> numBounces;

    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);

    cout << distance << endl;

    return 0;
}