#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    cout << fixed << setprecision(4) << (bounciness * (1 + 0.5*(pow(2,numBounces)-1)));

    return 0;
}