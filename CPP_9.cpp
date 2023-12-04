```cpp
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int current_max = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] > current_max) {
            current_max = numbers[i];
        }
        result.push_back(current_max);
    }
    return result;
}
```