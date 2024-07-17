#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cout << "Enter the starting height: ";
    cin >> startingHeight;

    cout << "Enter the height after first bounce: ";
    cin >> heightAfterFirstBounce;

    double bouncinessIndex = (heightAfterFirstBounce / startingHeight);

    cout << "Enter the number of bounces: ";
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -i/2.0) * startingHeight;
    }

    cout << "The total distance travelled by the ball is: " << totalDistance;

    return 0;
}