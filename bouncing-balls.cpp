#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight + firstBounceHeight;
        startingHeight *= bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    cout << distance << endl;
    
    return 0;
}