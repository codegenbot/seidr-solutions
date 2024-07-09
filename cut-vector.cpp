```cpp
#include <vector>
#include <climits>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i <= vec.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int k = i; k < vec.size(); k++) {
            right_sum += vec[k];
        }
        if (left_sum == right_sum) {
            return {{}, vector<int>(vec.begin() + i, vec.end())};
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left = {vec[0]};
    for (int i = 1; i < cut_index; i++) {
        left.push_back(vec[i]);
    }
    vector<int> right = {};
    for (int i = cut_index; i < vec.size(); i++) {
        right.push_back(vec[i]);
    }
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto& x : vec) cin >> x;
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        if(i > 0) cout << " ";
        cout << result.first[i];
    }
    cout << "], [";
    for (int i = 0; i < result.second.size(); i++) {
        if(i > 0) cout << " ";
        cout << result.second[i];
    }
    cout << "]";
    return 0;
}