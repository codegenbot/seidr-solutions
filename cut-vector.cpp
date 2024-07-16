#include <iostream>
#include <vector>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = abs(v[1] - v[0]);
    int splitIndex = 1;
    
    for (int i = 2; i < v.size(); i++) {
        if (v[i] == v[0]) {
            splitIndex = i;
            break;
        } else {
            int diff = abs(v[i] - v[0]);
            if (diff < minDiff) {
                minDiff = diff;
                splitIndex = i;
            }
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
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "] [";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}