#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex);
    }

    cout << fixed << setprecision(5);
    cout << firstBounce / startHeight << endl;
    cout << totalDistance + 1.0 << endl;

    return 0;
}