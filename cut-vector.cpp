```cpp
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex1 = 0, splitIndex2 = 0;

    for (int i = 1; i < v.size(); i++) {
        for (int j = 0; j < i; j++) {
            int diff = abs(v[i] - v[j]);
            if (diff < minDiff) {
                minDiff = diff;
                splitIndex1 = j;
                splitIndex2 = i;
            }
        }
    }

    vector<int> left(v.begin(), v.begin() + splitIndex2);
    vector<int> right(vector<int>(v.begin() + splitIndex1, v.begin() + splitIndex2));

    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0" << endl;
    return 0;
}