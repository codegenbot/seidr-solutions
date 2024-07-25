#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double firstBounceHeight;
    cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 0.0;
    
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight - 2 * startingHeight * bouncinessIndex + startingHeight) / (2 * bouncinessIndex);
    }
    
    cout.precision(4);
    cout << fixed << totalDistance;
    
    return 0;
}