```c++
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

    double totalHeight = startHeight;
    for (int i = 0; i < numBounces; ++i) {
        totalHeight += totalHeight * pow(bouncinessIndex, i + 1);
    }
    totalDistance = (2.0 * totalHeight);

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}