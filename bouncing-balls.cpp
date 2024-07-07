```c++
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / (0.5 * startHeight);

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow((1 - 0.5), i) * startHeight;
    }

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance + firstBounceHeight << endl;

    return 0;
}