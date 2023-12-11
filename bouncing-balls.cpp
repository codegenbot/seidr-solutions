#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    // Read input from user
    cin >> startingHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startingHeight;

    // Calculate total distance traveled
    double totalDistance = startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * totalDistance);
    }

    // Output the result
    cout << fixed << setprecision(15) << totalDistance << endl;

    return 0;
}