#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout << fixed << setprecision(4) << (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces)) << endl;

    return 0;
}