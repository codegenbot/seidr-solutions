#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = firstBounce / startHeight;
    double newHeight = startHeight * 0.5;

    double totalDistance = 0.0;
    double maxHeight = startHeight;

    for (int i = 2; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex;
        maxHeight += startHeight - newHeight; 
        newHeight = startHeight; 
    }

    cout << fixed;
    cout << maxHeight << endl;

    return 0;
}