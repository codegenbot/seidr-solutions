#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < vec.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; j++) {
            left_sum += vec[j];
        }
        for (int j = i + 1; j < vec.size(); j++) {
            right_sum += vec[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left_vec(vec.begin(), vec.begin() + cut_index + 1);
    vector<int> right_vec(vec.begin() + cut_index + 1, vec.end());
    return make_pair(left_vec, right_vec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        if (i == result.first.size() - 1) {
            cout << result.first[i];
        } else {
            cout << result.first[i] << ", ";
        }
    }
    cout << "], [";
    for (int i = 0; i < result.second.size(); i++) {
        if (i == result.second.size() - 1) {
            cout << result.second[i];
        } else {
            cout << result.second[i] << ", ";
        }
    }
    cout << "]";
    return 0;
}