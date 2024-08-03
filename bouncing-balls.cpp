```c++
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1.0 * log2(bouncinessIndex)) * startHeight;
    }

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance << endl;

    return 0;
}