```
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
        totalDistance += 2 * startHeight;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    std::cout << totalDistance << endl;

    return 0;
}