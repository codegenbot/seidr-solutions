#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounce;
    int numBounces;

    cin >> startingHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startingHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, i - 1) * bouncinessIndex;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}