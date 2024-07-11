```cpp
#include <iostream>
#include <iomanip>  
#include <cmath>   

using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex * i);
    }

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}