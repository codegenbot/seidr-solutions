```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;

    double distanceTravelled = 0.0; 
    cout << fixed; 
    cout << setprecision(10); 
    for (int i = 1; i <= numBounces; ++i) {
        distanceTravelled += startHeight * sqrt(2) * pow(0.5, i);
    }
    cout << distanceTravelled << endl;

    return 0;
}