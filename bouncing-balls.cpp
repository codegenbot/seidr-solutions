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
    double totalDistance = 0.5 * (1 - pow(bouncinessIndex, -2)) * startHeight * numBounces;

    cout.precision(4);
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}