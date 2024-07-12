```cpp
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> ws; 
    cin >> startHeight;
    cin >> ws; 
    string str;
    cin >> str; 
    istringstream iss(str);
    iss >> firstBounce;
    cin >> ws; 
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight *= bouncinessIndex;
    }

    cout << fixed;
    cout << totalDistance << "\n";

    return 0;
}