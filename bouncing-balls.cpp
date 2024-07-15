#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = pow(firstBounce / startHeight, -1);

    double totalDistance = 0.0;

    double currentHeight = startHeight;

    for(int i = 1; i <= numBounces; i++) {
        totalDistance += currentHeight * 2;
        currentHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(10) << totalDistance << endl;

    return 0;
}