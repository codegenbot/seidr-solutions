#include <iostream>
using namespace std;

int main() {
    string startHeightStr, firstBounceStr;
    int numBounces; 

    cin >> startHeightStr >> firstBounceStr >> numBounces; 

    double bouncinessIndex = (stod(firstBounceStr) / stod(startHeightStr));
    
    double startHeight = stod(startHeightStr);
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double height = startHeight;
        startHeight *= bouncinessIndex;
        totalDistance += sqrt(pow(height, 2) + pow(startHeight, 2));
        height = startHeight;
    }

    cout << fixed;
    cout.precision(10);
    cout << totalDistance << endl;

    return 0;
}