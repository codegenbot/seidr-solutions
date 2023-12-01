#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;
    double bounceHeight = firstBounceHeight;
    
    for (int i = 2; i <= numBounces; i++) {
        bounceHeight *= bouncinessIndex;
        totalDistance += 2 * bounceHeight;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}