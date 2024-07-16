#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance;
    totalDistance = (1 - pow(2, -numBounces)) / (1 - 0.5);
    
    cout << fixed << std::setprecision(10);
    cout << totalDistance + 0.00001 << endl;

    return 0;
}