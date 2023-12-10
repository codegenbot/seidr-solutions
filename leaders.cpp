```
#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int currentLeader = INT_MIN;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] > currentLeader) {
            currentLeader = v[i];
            result.push_back(currentLeader);
        }
    }
    return result;
}

int main() {
    vector<int> v = {1, 2, 3};
    vector<int> result = leaders(v);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
```