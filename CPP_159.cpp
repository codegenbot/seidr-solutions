```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = max(remaining - need, 0);
    return {totalEaten, left};
}

int main() {
    vector<int> output = eat(4, 5, 1);
    cout << output[0] << " " << output[1] << endl;
    return 0;
}
```