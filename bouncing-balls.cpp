#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout << fixed << setprecision(4) << startHeight * (2.0 / 3.0) * ((1 - pow(bouncinessIndex, numBounces + 1)) / (1 - bouncinessIndex)) << endl;

    return 0;
}