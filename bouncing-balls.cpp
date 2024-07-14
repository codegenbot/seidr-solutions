#include <iostream>
using namespace std;

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = heightAfterFirstBounce / startHeight;
    
    double totalDistance = (1 + bouncinessIndex) * (2 - bouncinessIndex) * startHeight * pow(2, numBounces);

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}