```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result(2, 0);
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result[0] = totalEaten;
    result[1] = left;
    return result;
}

int main() {
    vector<int> output = eat(4, 5, 1);
    cout << output[0] << " " << output[1] << endl;
    return 0;
}
```