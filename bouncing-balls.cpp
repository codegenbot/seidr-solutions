#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return (heightAfterFirstBounce / startingHeight);
}

double calculateTotalDistance(int numBounces, double bouncinessIndex, double heightAfterFirstBounce) {
    double totalDistance = 0.0;
    
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2 * ((heightAfterFirstBounce / startingHeight) - 1), i);
    }
    
    return totalDistance;
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);
    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex, heightAfterFirstBounce);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}