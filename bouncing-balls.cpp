#include <iostream>
using namespace std;

int main() {
    double startHeight;
    cin >> startHeight;
    double firstBounce;
    cin >> firstBounce;
    double bouncinessIndex = firstBounce / startHeight;
    
    int numBounces;
    cin >> numBounces;
    
    double totalDistance = (1 + pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * numBounces;
    
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}