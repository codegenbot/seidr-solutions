#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex, totalDistanceTravelled;
    int numBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    bouncinessIndex = heightAfterFirstBounce / startingHeight;
    totalDistanceTravelled = 0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistanceTravelled += pow(bouncinessIndex, i);
    }
    cout << totalDistanceTravelled << endl;
    return 0;
}