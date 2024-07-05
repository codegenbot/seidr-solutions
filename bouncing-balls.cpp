```
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight * pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}