#include <iostream>
using namespace std;

double calculateBounciness(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

long long calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * (numBounces * (2 + numBounces));
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bounciness = calculateBounciness(startHeight, firstBounceHeight);
    long long totalDistance = calculateTotalDistance(bounciness, numBounces);

    cout << fixed << setprecision(4) << totalDistance << endl;
    
    return 0;
}