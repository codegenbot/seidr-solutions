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
        double newHeight = startHeight * pow(2, -bouncinessIndex);
        totalDistance += abs(newHeight - startHeight); // add the distance traveled in this bounce
        startHeight = newHeight; // update the starting height for the next bounce
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}