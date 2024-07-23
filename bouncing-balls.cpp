```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    cout << fixed << setprecision(4) << (1 + pow(2.0, bouncinessIndex)) - 1.0 << endl;

    return 0;
}