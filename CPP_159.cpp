```cpp
#include <iostream>
#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    return {totalEaten, left};
}

int main() {
    vector<int> output = eat(4, 5, 1);
    cout << output[0] << " " << output[1] << endl;
    return 0;
}
```