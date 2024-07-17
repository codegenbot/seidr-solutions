#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout.precision(5);
    cout << fixed << setprecision(5) << (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 4)) * ... * ((-1)^numBounces * pow(bouncinessIndex, 2^numBounces));

    return 0;
}