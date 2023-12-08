```
#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int currentMax = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > currentMax) {
            currentMax = numbers[i];
        }
        result.push_back(currentMax);
    }
    return result;
}
```