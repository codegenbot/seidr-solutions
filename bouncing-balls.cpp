#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    int indexRoundedUp = ceil(firstBounce / startHeight);
    startHeight *= (indexRoundedUp * 1.0); 

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight; 
        startHeight *= indexRoundedUp; 
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}