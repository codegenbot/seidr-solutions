```cpp
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight;
    cout << "Enter first bounce height: ";
    cin >> firstBounce;
    cout << "Enter number of bounces: ";
    cin >> numBounces;  

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}