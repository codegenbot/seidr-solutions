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

    double totalDistance = firstBounce * bouncinessIndex;

    cout << fixed << std::setprecision(10);
    cout << static_cast<int>(totalDistance + 0.00001) << endl;

    return 0;
}