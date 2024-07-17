#include <iostream>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * (startHeight + (firstBounce - startHeight) * (1 - pow(2, -bouncinessIndex)) / (1 - pow(2, -1)));
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}