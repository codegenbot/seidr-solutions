```cpp
#include <cmath>

int main() {
    double startHeight, actualStartHeight, actualBouncinessIndex;

    // Get the input values from user
    cin >> startHeight >> actualStartHeight;
    actualBouncinessIndex = (actualStartHeight / startHeight);

    double totalDistance = (pow(2, actualBouncinessIndex) - 1) * actualBouncinessIndex * startHeight;

    return 0;
}