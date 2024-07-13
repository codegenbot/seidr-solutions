#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int startHeight, firstBounce;
    cin >> startHeight >> firstBounce;

    double bouncinessIndex = (double)firstBounce / startHeight;

    int numBounces; 
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight = firstBounce;
    }

    cout << fixed;
    cout << totalDistance << "\n";
    return 0;
}