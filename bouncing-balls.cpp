#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (2.0 * (heightFirstBounce / heightStart)) * (1 - pow(bouncinessIndex, i));
    }

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}