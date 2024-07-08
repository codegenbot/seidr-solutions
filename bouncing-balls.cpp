#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = startHeight * (1 + bouncinessIndex) / (1 - bouncinessIndex);

    cout << fixed << setprecision(5) << showpoint << totalDistance << endl;

    return 0;
}