#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    std::cout << fixed;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight * pow(bouncinessIndex, i);
    }

    std::cout << setprecision(6) << totalDistance << endl;

    return 0;
}