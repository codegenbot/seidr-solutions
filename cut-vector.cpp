```cpp
#include <iostream>
#include <vector>
#include <algorithm>

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i <= v.size(); i++) {
        int sumLeft = 0, sumRight = 0;

        for (int j = 0; j < i; j++) {
            sumLeft += v[j];
        }

        for (int j = i; j < v.size(); j++) {
            sumRight += v[j];
        }

        int diff = abs(sumLeft - sumRight);

        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + splitIndex);
    vector<int> right(v.begin() + splitIndex, v.end());

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
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << " ";
    }
    cout << "] [" << "[";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}