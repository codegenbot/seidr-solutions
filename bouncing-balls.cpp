#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce;        
    cin >> numBounces;

    double bouncinessIndex = (firstBounce / startHeight);
    startHeight = firstBounce; // update start height for next bounce

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double bounceHeight = pow(2, -bouncinessIndex) * startHeight;
        totalDistance += bounceHeight;
        startHeight *= 2 * (1 - bouncinessIndex);
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}