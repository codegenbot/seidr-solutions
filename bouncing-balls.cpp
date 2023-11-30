#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += bounceHeight * 2;
        bounceHeight *= bouncinessIndex;
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