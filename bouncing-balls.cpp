
```
#include <iostream>
using namespace std;

int main() {
    float startingHeight = 10.0;
    float firstBounceHeight = 9.5;
    int numBounces = 3;

    cout << "The bounciness index is: " << (firstBounceHeight / startingHeight) << endl;
    cout << "The total distance traveled by the ball is: " << ((1 + firstBounceHeight / startingHeight) * (numBounces - 1) + firstBounceHeight / startingHeight) << endl;
}
```