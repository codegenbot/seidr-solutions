```c++
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight;
    std::string discard;
    cin >> firstBounceHeight >> discard;
    cin >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;

    return 0;
}