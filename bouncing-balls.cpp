#include <iostream>
using namespace std;

long double calculateDistance(long double startingHeight, long double firstBounceHeight, int numBounces) {
    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
        bouncinessIndex *= firstBounceHeight / startingHeight;
    }
    
    return totalDistance;
}

int main() {
    long double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    long double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    cout << distance << endl;
    
    return 0;
}