```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = (1 - pow(firstBounceHeight / startHeight, 2)) / (1 + firstBounceHeight / startHeight);

    cout << fixed << setiosflags(std::ios::fixed) << (2 * startHeight) * (1 - pow(bouncinessIndex, numBounces)) << endl;

    return 0;
}