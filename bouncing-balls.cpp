```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double height = startHeight;
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * height;
        height /= 2.0;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}