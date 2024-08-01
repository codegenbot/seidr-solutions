#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bounciness = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed << setprecision(4) << (1 + bounciness)*(startHeight*(pow(bounciness, numBounces)+1)/((bounciness-1)*pow(startHeight*bounciness, 0.5)));

    return 0;
}