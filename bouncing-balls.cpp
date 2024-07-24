#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    double bouncinessIndex = firstBounce / startHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex * i);
    }

    cout.precision(6); // to print the output with precision of 6 decimal places
    cout << fixed << totalDistance;

    return 0;
}