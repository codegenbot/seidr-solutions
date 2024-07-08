```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(5) << showpoint << totalDistance << endl;

    cout << setprecision(5);

    return 0;
}