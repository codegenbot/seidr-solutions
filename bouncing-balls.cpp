#include <cmath>
using namespace std;
double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; ++i) {
        totalDistance += (startingHeight + ((double)i + 1.0) * bouncinessIndex);
    }
    return totalDistance;
}
