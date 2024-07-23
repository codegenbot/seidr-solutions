#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = (firstBounce - startHeight) / startHeight + 1.0;
    double newHeight = startHeight * 0.5;

    double totalDistance = 0.0;
    for (int i = 2; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex;
        totalDistance += abs(startHeight - newHeight); 
        newHeight = startHeight; 
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}