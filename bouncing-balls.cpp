#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout << fixed << setprecision(4) << startHeight * pow(2, numBounces + 1) / 3.0 * (1 - pow(bouncinessIndex, numBounces)) << endl;

    return 0;
}