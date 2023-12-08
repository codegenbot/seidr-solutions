#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 6;
    vector<int> result = findPair(nums, target);
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}
```
This code defines a `main` function that initializes the input vector and target value, calls the `findPair` function to find the two elements that sum to the target, and then prints the result.