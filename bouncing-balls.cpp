
Sure, here is the modified code that includes the `iostream` header file and removes the extra include statements:
```
#include <iostream>

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    cout << fixed << setprecision(9) << totalDistance << endl;
    return 0;
}
```