#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce - startHeight) / startHeight;

    double totalDistance = 0.0;
    double currentHeight = startHeight;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight = (1 - bouncinessIndex) * currentHeight;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}