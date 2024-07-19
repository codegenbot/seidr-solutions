#include <iostream>
#include <cmath>
#include <iomanip>

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
        totalDistance += (2 * startHeight) * ((pow((1 + bouncinessIndex), i)) - 1) / ((pow((1 + bouncinessIndex), i)));
    }
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}