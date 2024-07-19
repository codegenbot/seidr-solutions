#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounceHeight;
    cin >> firstBounceHeight;
    double bouncinessIndex = firstBounceHeight / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double height = pow((1 + bouncinessIndex), i) * startHeight;
        totalDistance += height - height / pow(2, i);
    }
    
    cout << fixed;
    cout << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}