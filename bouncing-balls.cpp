#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;
    double totalDistance = (1 + pow(bouncinessIndex, 2)) * (heightStart + heightFirstBounce) * (2 * numBounces + 1) - heightFirstBounce;

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}