#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed << (startHeight + (firstBounce - startHeight) * pow(bounciness, numBounces)) << endl;

    return 0;
}