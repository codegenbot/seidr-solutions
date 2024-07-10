#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce - startHeight) / startHeight;

    double totalDistance = 0.0;
    double height = startHeight; // Initialize the height to the starting height.
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += height;
        height = (1 - bouncinessIndex) * startHeight + bouncinessIndex * height; // Calculate the height after this bounce.
    }

    cout << fixed << setprecision(9);
    cout << totalDistance << endl;

    return 0;
}