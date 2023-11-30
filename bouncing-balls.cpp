#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * startingHeight;
        startingHeight *= bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    cout << fixed << setprecision(15) << totalDistance << endl;

    return 0;
}