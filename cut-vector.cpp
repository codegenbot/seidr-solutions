```
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

int cutVector(vector<int> &vec) {
    int n = vec.size();
    if (n == 0) {
        return 0;
    }
    int left = 0, right = n - 1;
    while (left < right) {
        int diff = abs(vec[left] - vec[right]);
        if (diff == 0) {
            break;
        }
        if (diff % 2 == 0) {
            left++;
            right--;
        } else {
            right--;
        }
    }
    return left;
}

int main() {
    vector<int> vec = {1, 10, 100, 1000, 10000};
    int result = cutVector(vec);
    cout << "The spot to cut is: " << result << endl;
    return 0;
}
```