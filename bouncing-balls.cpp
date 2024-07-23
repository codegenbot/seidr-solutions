```c++
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = (startHeight * (1 - pow(bouncinessIndex, numBounces))) / (1 - bouncinessIndex);

    cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;
    
    return 0;
}