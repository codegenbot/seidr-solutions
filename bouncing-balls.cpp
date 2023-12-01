#include<bits/stdc++.h>
using namespace std;

float calculateTotalDistance(float startingHeight, float bounceHeight, int numBounces) {
    float bouncinessIndex = bounceHeight / startingHeight;
    float totalDistance = 0;
    totalDistance += startingHeight;
    for(int i = 0; i < numBounces; i++) {
        totalDistance += (2 * bounceHeight);
        bounceHeight *= bouncinessIndex;
    }
    return totalDistance;
}

int main() {
    float startingHeight, bounceHeight;
    int numBounces;

    cin >> startingHeight >> bounceHeight >> numBounces;

    float totalDistance = calculateTotalDistance(startingHeight, bounceHeight, numBounces);
    cout << totalDistance << endl;

    return 0;
}