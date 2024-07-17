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
        startHeight *= bouncinessIndex;
        totalDistance += startHeight * 2.0;
    }

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}