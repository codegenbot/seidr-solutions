#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double height, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> height >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / height;
    totalDistance = 0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    cout << fixed << setprecision(9) << totalDistance << endl;
    return 0;
}