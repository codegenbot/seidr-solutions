```
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<pair<int, int>> ones_count;
    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        int num = arr[i];
        while (num > 0) {
            if (num % 2 == 1) {
                count++;
            }
            num /= 2;
        }
        ones_count.push_back(make_pair(count, arr[i]));
    }
    sort(ones_count.begin(), ones_count.end());
    vector<int> result;
    for (int i = 0; i < ones_count.size(); i++) {
        result.push_back(ones_count[i].second);
    }
    return result;
}
```