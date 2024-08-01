#include <iostream>
using namespace std;

int main() {
    double height, firstBounceHeight;
    int numBounces;

    cin >> height >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / height;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (2 * i + 1) * bouncinessIndex - i;
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}