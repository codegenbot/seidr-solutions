#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += (2.0 * (heightStart + heightFirstBounce) / (i+1));
    }

    cout.setprecision(5);
    cout << fixed << totalDistance << endl;

    return 0;
}