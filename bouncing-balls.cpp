#include <iostream>
using namespace std;

int main() {
    double height, bounceHeight;
    int numBounces;

    cin >> height >> bounceHeight >> numBounces;

    double bounciness = bounceHeight / height;
    double totalDistance = (1 - pow(bounceHeight / height, numBounces)) / (1 - bounceness);

    cout.precision(6);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}