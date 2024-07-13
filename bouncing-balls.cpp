#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce;        
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = startHeight;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += totalDistance * (1 - pow(0.5, i));
    }

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}