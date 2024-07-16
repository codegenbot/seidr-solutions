```cpp
#include <iostream>
#include <cmath> 
#include <string>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;  

    string input = to_string(startHeight) + " " + to_string(firstBounce) + " " + to_string(numBounces);

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