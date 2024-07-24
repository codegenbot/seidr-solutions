#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = 2.0; // initial distance traveled
    for(int i=1; i<=numBounces; i++) {
        totalDistance += 2.0 * (1 - pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}