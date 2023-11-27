#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight;
        startingHeight *= bouncinessIndex;
        totalDistance += startingHeight;
    }
    return totalDistance;
}

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    cin >> startingHeight >> bounceHeight >> numBounces;
    double distance = calculateDistance(startingHeight, bounceHeight, numBounces);
    cout << distance << endl;
    return 0;
}