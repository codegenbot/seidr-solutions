#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + 2 * firstBounceHeight;
    for (int i = 2; i <= numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * firstBounceHeight;
        bouncinessIndex *= bouncinessIndex;
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