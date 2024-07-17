#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex);
    }

    cout.precision(6); // To handle precision issues
    cout << fixed << setprecision(6) << startHeight * (1 + bouncinessIndex) + totalDistance << endl;

    return 0;
}