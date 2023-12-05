```
#include <iostream>
using namespace std;

float bouncingBalls(float startingHeight, float firstBounceHeight, int numBounces) {
    float bouncinessIndex = firstBounceHeight / startingHeight;
    return (1 + bouncinessIndex) * (numBounces - 1) + bouncinessIndex;
}

int main() {
    cout << "Enter the starting height of the ball: ";
    float startingHeight;
    cin >> startingHeight;
    cout << "Enter the height after the first bounce: ";
    float firstBounceHeight;
    cin >> firstBounceHeight;
    cout << "Enter the number of bounces: ";
    int numBounces;
    cin >> numBounces;
    cout << "The total distance traveled by the ball is: " << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;
}
```