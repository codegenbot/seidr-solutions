```
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = startHeight * pow(1 + bouncinessIndex, numBounces);
    cout << fixed << setprecision(10) << totalDistance << endl;

    return 0;
}