#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce - startHeight) / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        startHeight = pow(2, -bouncinessIndex) * startHeight;
        if (i % 2 == 0) {
            totalDistance += startHeight;
        } else {
            totalDistance -= startHeight;
        }
    }

    cout << fixed << setprecision(10);
    cout << totalDistance << endl;

    return 0;
}