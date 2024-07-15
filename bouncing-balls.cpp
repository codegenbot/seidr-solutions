#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    for(int i=1; i<=numBounces; i++) {
        firstBounceHeight /= 2;
        totalDistance += firstBounceHeight;
    }
    
    cout << fixed << setprecision(5) << totalDistance << endl;
    
    return 0;
}