```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // calculate bounciness index correctly by taking into account the initial velocity
    double bouncinessIndex = pow((2.0 * (1.0 - 0.5)), (-1 / log(2.0)) * log(firstBounce/startHeight));

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double newHeight = startHeight * pow(2, -bouncinessIndex);
        totalDistance += abs(newHeight - startHeight); // add the distance traveled in this bounce
        startHeight = newHeight; // update the starting height for the next bounce
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}