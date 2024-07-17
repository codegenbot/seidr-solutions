#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += bouncinessIndex * (2.0 * i - 1.0);
    }

    cout.precision(5); // set the precision to 5
    cout << fixed << totalDistance << endl;

    return 0;
}