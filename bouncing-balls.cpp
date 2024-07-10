```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    heightAfterFirstBounce = (startHeight * 0.5) + (startHeight * 0.5 * bouncinessIndex);

    double totalDistance = (startHeight + heightAfterFirstBounce) * pow(0.5, 1 - bouncinessIndex);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}