#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    double currentHeight = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight; // Add the distance fallen
        currentHeight *= bouncinessIndex; // Calculate the height after bounce
        totalDistance += currentHeight; // Add the distance bounced up
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);
    
    cout << totalDistance << endl;
    
    return 0;
}