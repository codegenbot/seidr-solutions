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

    cout << fixed << setprecision(5);
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i) * startingHeight * 2.0;
    }
    cout << totalDistance << endl;

    return 0;
}