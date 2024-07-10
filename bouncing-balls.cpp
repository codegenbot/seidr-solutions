#include <iostream>
using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (1 + bouncinessIndex) * (2.0 / pow(2, i));
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}