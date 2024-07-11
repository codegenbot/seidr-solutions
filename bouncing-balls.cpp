#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double totalDistance = startHeight * (1 + bouncinessIndex) * pow(0.5, 2 * numBounces);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}