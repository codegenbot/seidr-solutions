#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;
    
    cin >> startHeight >> firstBounce >> numBounces;
    
    double bouncinessIndex = firstBounce / startHeight;
    
    double totalDistance = 0.0;
    
    for(int i=1; i<=numBounces; i++) {
        totalDistance += startHeight * (1 + bouncinessIndex) - startHeight;
        startHeight *= (1 + bouncinessIndex);
    }
    
    cout.precision(4);
    cout << fixed << totalDistance << endl;
    
    return 0;
}