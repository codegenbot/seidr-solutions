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
    double height = firstBounceHeight;
    
    for (int i = 2; i <= numBounces; ++i) {
        height = (1 - bouncinessIndex) * height;
        totalDistance += height - height / (pow(2, i));
    }
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;
    
    return 0;
}