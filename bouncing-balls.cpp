#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    // Read input from user
    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled across all bounces
    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (startHeight * (bouncinessIndex * pow(2, i-1) - 1));
    }

    // Print output to the console
    cout << fixed << setprecision(6);
    cout << startHeight << endl;
    cout << firstBounceHeight << endl;
    cout << totalDistance << endl;

    return 0;
}