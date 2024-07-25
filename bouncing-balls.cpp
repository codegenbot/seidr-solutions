#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bounciness = firstBounce / startHeight;

    // Calculate total distance
    double distance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        distance += pow(2, -bounciness);
    }

    cout << fixed << setprecision(5) << distance << endl;

    return 0;
}