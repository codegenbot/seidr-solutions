#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    cout << fixed << setprecision(4) << 2.0 * (1 + pow(bounciness, 2)) * numBounces << endl;

    return 0;
}