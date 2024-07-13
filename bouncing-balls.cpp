```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin >> firstBounce;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed;
    cout << totalDistance << "\n";

    return 0;
}