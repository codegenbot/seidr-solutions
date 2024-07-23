#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double newHeight = startHeight * (1 - bouncinessIndex);
        totalDistance += abs(newHeight - startHeight); 
        startHeight = newHeight; 
    }

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}