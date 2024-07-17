#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double firstBounceHeight;
    cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = (1 + bouncinessIndex) * (2 * (pow(bouncinessIndex, numBounces) - 1)) / (bouncinessIndex - 1);
    
    cout << fixed << setprecision(5) << totalDistance << endl;
    
    return 0;
}