#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += std::pow(2, i) * bounciness;
    }

    std::cout << fixed << setprecision(5);
    std::cout << totalDistance << endl;

    return 0;
}