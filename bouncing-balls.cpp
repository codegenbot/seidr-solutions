#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, 2)) * (numBounces * 2 + 1);

    cout.precision(4);
    cout << fixed;
    cout << setprecision(4) << totalDistance << endl;

    return 0;
}