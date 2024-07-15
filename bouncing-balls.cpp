```cpp
#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    // Read input from user
    cout << "Enter the starting height: ";
    cin >> startingHeight;
    cout << "Enter the height after the first bounce: ";
    cin >> firstBounceHeight;
    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    // Calculate bounciness index
    bouncinessIndex = firstBounceHeight / startingHeight;

    // Calculate total distance
    totalDistance = (numBounces * 2) + bouncinessIndex;

    // Print output
    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}