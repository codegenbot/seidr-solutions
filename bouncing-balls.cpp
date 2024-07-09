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

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    cout << "The total distance traveled by the ball is: " << fixed << setprecision(2) << totalDistance << endl;

    return 0;
}