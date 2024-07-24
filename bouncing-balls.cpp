#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    cout.precision(6);
    cout << fixed << (startHeight + (firstBounce - startHeight) * bouncinessIndex) << endl;

    for(int i = 1; i < numBounces; i++) {
        startHeight = firstBounce;
        firstBounce *= bouncinessIndex;
        cout.precision(6);
        cout << fixed << (startHeight + (firstBounce - startHeight) * bouncinessIndex) << endl;
    }

    return 0;
}