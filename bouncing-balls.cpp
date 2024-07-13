```
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    
    double firstBounce;
    cin >> firstBounce;
    
    int numBounces;
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = firstBounce * pow(2, -bouncinessIndex);
        totalDistance += startHeight;
        firstBounce *= bouncinessIndex;
    }

    cout << fixed;
    cout.setf(ios_base::floatfield, ios_base::fixed);
    cout << setprecision(5) << totalDistance << endl;

    return 0;
}