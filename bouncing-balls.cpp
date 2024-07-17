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
        totalDistance += pow(2, i+1) * startHeight * (1 - pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}