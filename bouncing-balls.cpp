#include <iostream>
using namespace std;

double calculateBouncinessIndex(double initialHeight, double firstBounceHeight) {
    return (firstBounceHeight / initialHeight);
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    if (numBounces == 0)
        return 0.0;
    else
        return (1 - pow(bouncinessIndex, -numBounces)) * 2;
}

int main() {
    double initialHeight, firstBounceHeight;
    int numBounces;

    cin >> initialHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(initialHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout << fixed << setprecision(5) << totalDistance << endl;
    
    return 0;
}