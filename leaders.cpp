
```
#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    int currentLeader = INT_MIN;
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= currentLeader) {
            result.push_back(v[i]);
            currentLeader = v[i];
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> result = leaders(v);
    cout << "Leaders: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
```