#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double startHeight, firstBounce;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed << (startHeight * ((1 + bouncinessIndex) * pow((1 - bouncinessIndex), numBounces))) << endl;

    return 0;
}