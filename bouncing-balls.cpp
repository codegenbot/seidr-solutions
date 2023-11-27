#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + (2 * firstBounceHeight);
    
    for (int i = 2; i <= numBounces; i++) {
        totalDistance += (2 * firstBounceHeight * pow(bouncinessIndex, i));
    }
    
    cout << totalDistance << endl;
    
    return 0;
}