#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    if (startHeight == 0) {
        cout << "0" << endl;
    } else {
        bounciness = firstBounce / startHeight;
        double totalDistance = (1 - pow(bounciness, -numBounces)) / (1 - bounciness);

        cout << fixed << setprecision(6);
        cout << totalDistance * 2.0 << endl;
    }

    return 0;
}