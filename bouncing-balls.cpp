#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = heightFirstBounce / heightStart;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1) * pow(bouncinessIndex, i);
    }

    cout << fixed << setprecision(6);
    cout << heightFirstBounce / heightStart << endl;
    cout << totalDistance << endl;

    return 0;
}