#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    cin >> startingHeight;
    
    double heightAfterFirstBounce;
    cin >> heightAfterFirstBounce;

    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    int numberOfBounces;
    cin >> numberOfBounces;

    double totalDistance = 0.0;
    for(int i = 1; i <= numberOfBounces; i++) {
        if(i == 1) {
            totalDistance += (heightAfterFirstBounce + heightAfterFirstBounce);
        } else {
            totalDistance += ((startingHeight * bouncinessIndex) * (2.0 * i - 1));
        }
    }

    cout << fixed;
    cout.precision(4);
    cout << totalDistance << endl;

    return 0;
}