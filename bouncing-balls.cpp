#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate actual bounciness index
    double bouncinessIndex = 1 - (firstBounce / startHeight);

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        double bouncingHeight = startHeight * pow(2, -i) * (1 - pow(bouncinessIndex, i));
        totalDistance += bouncingHeight * 2 * (1 - pow(0.5, i));
    }

    cout << fixed << setprecision(9);
    cout << totalDistance << endl;

    return 0;
}