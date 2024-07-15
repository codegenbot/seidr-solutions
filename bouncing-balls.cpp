```cpp
#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cout << "Enter starting height: ";
    cin >> startHeight;

    cout << "Enter height after the first bounce: ";
    cin >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout << "Enter number of bounces: ";
    cin >> numBounces;

    totalDistance = 0.5 * (2 * startHeight + firstBounceHeight) * numBounces * (1 - pow(bouncinessIndex, numBounces));

    cout << fixed << setprecision(5) << totalDistance << endl;
    return 0;
}