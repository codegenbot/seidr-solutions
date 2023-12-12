#include<iostream>
using namespace std;
float calculateTotalDistance(float startingHeight, float firstBounceHeight, int numBounces) {
    float bouncinessIndex = firstBounceHeight / startingHeight;
    float totalDistance = 0;
    float currentHeight = startingHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }
    return totalDistance;
}
int main() {
    float startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    float totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    cout << totalDistance << endl;
    return 0;
}