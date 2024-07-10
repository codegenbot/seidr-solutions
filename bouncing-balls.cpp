#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = 2 * (startHeight + startHeight * bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces));

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}