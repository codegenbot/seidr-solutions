#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout << fixed << setprecision(4) << 2 * (1 - pow(bouncinessIndex, numBounces+1)) << endl; 

    return 0;
}