#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;
    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, i) * bouncinessIndex - pow(2, i-1);
    }

    cout.precision(6); // to handle precision issues
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}