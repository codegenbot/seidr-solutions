#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance = 0;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    for (int i = 1; i <= numBounces; i++) {
        totalDistance = startingHeight + (bouncinessIndex * numBounces) + (0.5 * bouncinessIndex * (numBounces - 1));
    }
    
    cout << totalDistance << endl;
    
    return 0;
}