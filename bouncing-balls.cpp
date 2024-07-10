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
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, i) * bouncinessIndex + 1;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0; }