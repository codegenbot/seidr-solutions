#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    cout << fixed << setprecision(4) << (1 + bouncinessIndex) * (2 * (1 - pow(bouncinessIndex, 2))) * numBounces << endl;

    return 0;
}