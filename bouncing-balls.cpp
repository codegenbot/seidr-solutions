#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed << setprecision(4) << (1 + bouncinessIndex) * 2.0 << endl;

    return 0;
}