#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double newHeight = firstBounce * (1 - bouncinessIndex) + 0.5 * pow(2, -i);
        totalDistance += abs(newHeight - startHeight); 
        startHeight = newHeight; 
    }

    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}