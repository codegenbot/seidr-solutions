#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    totalDistance = startingHeight + (bouncinessIndex * numBounces) + (numBounces - 1) / 2 * bouncinessIndex;
    
    cout << totalDistance << endl;
    
    return 0;
}