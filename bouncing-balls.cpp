#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    cout << fixed << setprecision(4) << (1 + bounciness + pow(bounciness, 2) + ... + pow(bounciness, numBounces)) << endl;

    return 0;
}