#include <iostream>
using namespace std;

int getFirstNegativeIndex(vector<int> input) {
    int sum = 0;
    for (int i = 0; i < input.size(); i++) {
        sum += input[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}
```