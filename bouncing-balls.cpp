```c++
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    cout << fixed << setprecision(4) << startHeight * (1 - pow(1 - bouncinessIndex, numBounces)) << endl;

    return 0;
}