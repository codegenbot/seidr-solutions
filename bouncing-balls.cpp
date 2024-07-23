#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = (firstBounce / startHeight) * 0.5;
    double newHeight = startHeight * 0.5;

    double totalDistance = 0.0;
    for (int i = 2; i <= numBounces; ++i) {
        newHeight *= bouncinessIndex;
        totalDistance += abs(newHeight - (newHeight / 2)); 
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}