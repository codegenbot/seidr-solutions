

```
#include <iostream>

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    cout << fixed << setprecision(9) << totalDistance << endl;
    return 0;
}
```