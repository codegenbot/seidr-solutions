#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = (1 - pow((firstBounceHeight / startHeight), 2)) / (1 + (firstBounceHeight / startHeight));

    cout << fixed << setprecision(9) << (2 * startHeight) * (1 - pow(bouncinessIndex, numBounces)) << endl;

    return 0;
}