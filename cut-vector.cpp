#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n - 1; i++) {
        if (vec[i] == vec[i + 1]) {
            result.push_back({vec[0], vec[i]});
            return {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n - 1; i++) {
        if (abs(vec[i] - vec[i + 1]) < minDiff) {
            minDiff = abs(vec[i] - vec[i + 1]);
            cutIndex = i;
        }
    }
    
    result.push_back({vec.begin(), vec.begin() + cutIndex});
    return {result[0], {vec.begin() + cutIndex, vec.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec) {
        cin >> i;
    }
    
    vector<vector<int>> result = cutVector(vec);
    
    cout << "[";
    for (const auto &num : result[0]) {
        cout << num << " ";
    }
    cout << "]\n";

    cout << "[";
    for (auto it = result[1].begin(); it != result[1].end(); ++it) {
        cout << *it << " ";
    }
    cout << "]\n";

    return 0;
}