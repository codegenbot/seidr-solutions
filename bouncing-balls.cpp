```cpp
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int startHeight;
    cin >> startHeight;

    string input;
    cin >> input;
    int firstBounce = stoi(input);

    double bouncinessIndex = (double)firstBounce / startHeight;

    int numBounces; 
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex; 
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
    }

    cout << setprecision(2) << fixed << totalDistance << "\n";
    return 0;
}