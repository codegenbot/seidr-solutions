#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; j++) {
            left_sum += v[j];
        }
        for (int j = i + 1; j < v.size(); j++) {
            right_sum += v[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left, right;
    for (int i = 0; i <= cut_index; i++) {
        left.push_back(v[i]);
    }
    for (int i = cut_index + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Cut at index: " << (result.second.empty() ? -1 : 0) << endl;
    for (const auto &left : result.first) {
        cout << left << " ";
    }
    cout << endl;
    for (const auto &right : result.second) {
        cout << right << " ";
    }
    return 0;
}