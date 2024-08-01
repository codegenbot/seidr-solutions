#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return (firstBounceHeight / startingHeight);
}

long long calculateTotalDistance(double bouncinessIndex, int numBounces) {
    long long totalDistance = 0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += pow((bouncinessIndex + 1), i) - pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startingHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);

    long long totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;
    
    return 0;
}