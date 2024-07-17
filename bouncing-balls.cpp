```cpp
#include <iostream>
using namespace std;

int main() {
    double startingHeight;
    double heightAfterFirstBounce;
    int numBounces;
    double bouncinessIndex;
    double totalDistance = 0.0;

    cout << "Enter the starting height: ";
    cin >> startingHeight;

    cout << "Enter the height after first bounce: ";
    cin >> heightAfterFirstBounce;

    bouncinessIndex = heightAfterFirstBounce / startingHeight;

    cout << "Enter number of bounces: ";
    cin >> numBounces;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, (i-0.5)) * (bouncinessIndex - 1);
    }

    cout << "The total distance traveled by the ball is: " << totalDistance << endl;

    return 0;
}