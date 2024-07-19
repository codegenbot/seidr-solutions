#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double heightStart, heightAfterFirstBounce;
    int numBounces;

    cin >> heightStart >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / heightStart;

    double totalDistance = 2.0 * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}