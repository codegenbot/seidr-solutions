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

    double totalDistance = startHeight * pow(1 - 0.5, numBounces);
    
    cout << fixed << std::setprecision(10);
    cout << totalDistance + 0.00001 << endl;

    return 0;
}