```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (1 - (firstBounce / startHeight)) / 2.0;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight * (1 - pow(0.5, i));
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}