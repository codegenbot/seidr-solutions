#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}