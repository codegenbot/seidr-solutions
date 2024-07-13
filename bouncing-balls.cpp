#include <iostream>
using namespace std;

double calculateBounciness(double startHeight, double firstBounceHeight) {
    return (firstBounceHeight / startHeight);
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex * (i-1));
    }
    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bounciness = calculateBounciness(startHeight, firstBounceHeight);

    double totalDist = calculateTotalDistance(bounciness, numBounces);

    cout << fixed << setprecision(4) << totalDist;
    
    return 0;
}