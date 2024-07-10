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

    double totalDistance = (2 * (startHeight + heightAfterFirstBounce)) * pow(0.5, numBounces);

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}