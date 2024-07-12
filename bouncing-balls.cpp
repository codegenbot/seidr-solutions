#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;
    
    cin >> startHeight >> heightAfterFirstBounce >> numBounces;
    
    double bouncinessIndex = heightAfterFirstBounce / startHeight;
    double totalDistance = startHeight + heightAfterFirstBounce;
    
    for (int i = 2; i <= numBounces; ++i) {
        double bounceHeight = heightAfterFirstBounce * bouncinessIndex;
        totalDistance += bounceHeight;
        heightAfterFirstBounce = bounceHeight;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}