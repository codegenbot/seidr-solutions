#include <iostream>
using namespace std;

int main() {
    int startingHeight, heightAfterFirstBounce;
    cout << "Enter starting height: ";
    cin >> startingHeight;
    cout << "Enter height after first bounce: ";
    cin >> heightAfterFirstBounce;
    float bouncinessIndex = (float)heightAfterFirstBounce / startingHeight;

    int numBounces;
    cout << "Enter number of bounces: ";
    cin >> numBounces;
    int totalDistance = 0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * bouncinessIndex - startingHeight) + (startingHeight * bouncinessIndex - startingHeight);
    }
    cout << "Total distance traveled: " << totalDistance << endl;
    return 0;
}