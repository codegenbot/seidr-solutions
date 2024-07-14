```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    int numBounces; 

    cin >> startHeightStr >> firstBounceStr >> numBounces; 

    double bouncinessIndex = (stod(firstBounceStr) / stod(startHeightStr));

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, i+1)-1)*bouncinessIndex*4;
    }

    cout << fixed;
    cout.precision(10);
    cout << totalDistance << endl;

    return 0;
}