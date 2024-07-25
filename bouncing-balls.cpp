#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;
    
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += bouncinessIndex * (2.0 * i - 1.0);
    }
    
    cout.precision(6); // to print the output with correct precision
    cout << fixed << totalDistance << endl;
    
    return 0;
}