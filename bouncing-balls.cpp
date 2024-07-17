#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    double bouncinessIndex;

    cout << "Enter the starting height: ";
    cin >> startingHeight;

    cout << "Enter the height after first bounce: ";
    cin >> heightAfterFirstBounce;

    bouncinessIndex = (heightAfterFirstBounce / startingHeight);

    numBounces = 0;
    while(numBounces < 10) {
        cout << "Enter the number of bounces: ";
        cin >> numBounces;
        if(numBounces > 0)
            break;
    }

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (pow(2, i/2.0) + pow(2, (i-1)/2.0)) * (bouncinessIndex - 1);
    }

    cout << "The total distance travelled by the ball is: " << totalDistance;

    return 0;
}