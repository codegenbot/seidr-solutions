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

    double totalDistance = 0.0;
    double height = startHeight;

    for (int b = 0; b < numBounces; ++b) {
        double distance = pow(2, -1) * height;
        totalDistance += distance;
        height *= bouncinessIndex; // use previous bounce's height and multiply by bounciness index
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}