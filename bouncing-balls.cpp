#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int bounces;

    cin >> startingHeight >> firstBounceHeight >> bounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    double totalDistance = 2.0 * (1.0 - pow(bouncinessIndex, bounces)) / (1.0 - bouncinessIndex);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}