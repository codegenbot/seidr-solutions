#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight; 

    double totalDistance = 0.0;
    double currentHeight = firstBounceHeight; 

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += currentHeight; 
        currentHeight *= bouncinessIndex * 0.5; // Don't forget to account for half the height
    }

    cout << fixed << setprecision(4);
    cout << bouncinessIndex << endl;
    cout << totalDistance + startHeight << endl;

    return 0;
}