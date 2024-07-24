#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    cout << fixed << setprecision(4) << (1 + 2 * bounciness) * numBounces << endl;

    return 0;
}