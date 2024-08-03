#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    cout << fixed << setprecision(5);
    cout << bouncinessIndex;

    for (int i = 2; i <= numBounces; i++) {
        firstBounce /= startHeight;
        cout << " " << fixed << setprecision(5) << i * bouncinessIndex;
    }

    return 0;
}