#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    
    double totalDistance = (2.0 * 1.0) * (numBounces * (bouncinessIndex + 1.0 - pow(bouncinessIndex, (double)(numBounces+1))));
    
    cout << fixed << setprecision(4);
    cout << totalDistance;
    
    return 0;
}