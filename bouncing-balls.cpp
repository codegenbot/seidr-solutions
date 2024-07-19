#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    
    double firstBounce;
    cin >> firstBounce;
    
    int numBounces;
    cin >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;
    
    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, 2) + 1);
    
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (pow(bouncinessIndex, 2)) / (1 + bouncinessIndex) * pow(0.5, 2 * i);
    }
    
    cout << fixed << setprecision(4) << totalDistance;
    
    return 0;
}