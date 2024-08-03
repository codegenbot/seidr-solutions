#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1.0 * log(bouncinessIndex) / log(2)) + 1.0;
    }

    // Print output
    cout << fixed << setprecision(6);
    cout << startHeight << endl;
    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}