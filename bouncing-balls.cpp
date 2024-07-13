```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = firstBounce * pow(2, -bouncinessIndex);
        totalDistance += startHeight;
        firstBounce *= bouncinessIndex;
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << totalDistance << endl;

    return 0;
}