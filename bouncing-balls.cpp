#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounce, bouncinessIndex;
    cin >> startingHeight >> firstBounce;
    bouncinessIndex = (firstBounce / startingHeight);
    int numBounces;
    cin >> numBounces;
    totalDistance = (1 - pow(bouncinessIndex, 2)) * numBounces * startingHeight;
    cout << fixed << setprecision(5) << totalDistance << endl;
    return 0;
}