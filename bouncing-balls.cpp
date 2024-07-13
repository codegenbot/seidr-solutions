#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    // Read input from user
    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * (startHeight * (1 + pow(2, bouncinessIndex))) - startHeight;
    }

    // Print output
    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}