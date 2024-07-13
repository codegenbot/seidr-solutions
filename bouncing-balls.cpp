```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = firstBounce * pow(2, -bouncinessIndex);
        totalDistance += startHeight;
        firstBounce *= bouncinessIndex;
    }

    cout << std::fixed;
    cout.setf(ios_base::floatfield, ios_base::fixed);
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}