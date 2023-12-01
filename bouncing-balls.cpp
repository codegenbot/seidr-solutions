#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = startingHeight / firstBounceHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    cout << distance << endl;

    return 0;
}