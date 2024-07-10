#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    double bouncinessIndex = heightFirstBounce / heightStart;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}