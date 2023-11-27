#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        firstBounceHeight *= bouncinessIndex;
        totalDistance += 2 * firstBounceHeight * bouncinessIndex;
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