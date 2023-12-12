#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    double currentHeight = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double result = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    cout << result << endl;
    
    return 0;
}