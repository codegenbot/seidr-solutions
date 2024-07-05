#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance = 0;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight + (i * bouncinessIndex));
    }
    
    cout << totalDistance << endl;
    
    return 0;
}