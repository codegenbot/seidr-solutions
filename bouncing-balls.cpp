#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    using namespace std;

    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}