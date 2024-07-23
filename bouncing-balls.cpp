```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (startHeight + (startHeight - firstBounceHeight) * pow(bouncinessIndex, i));
    }

    cout << setprecision(6) << fixed;
    cout << totalDistance << endl;

    return 0;
}