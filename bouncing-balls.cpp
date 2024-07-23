```c++
#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounceHeight;
    cout << "Enter starting height: ";
    cin >> startHeight;
    cout << "Enter height after the first bounce: ";
    cin >> firstBounceHeight;
    
    double bouncinessIndex = firstBounceHeight / startHeight;
    int numBounces;
    cout << "Enter number of bounces: ";
    cin >> numBounces;
    
    double totalDistance = 0.5 * (1 - pow(0.5, 2*numBounces)) / (1 - 0.5) * startHeight * bouncinessIndex;
    cout << "Total distance traveled by the ball: " << totalDistance << endl;
    return 0;
}