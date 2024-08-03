```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int i : l) {
        if (find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

vector<int> output = unique({5, 3, 5, 2, 3, 3, 9, 0, 123});
for (int i : output) {
    cout << i << " ";
}
return 0;