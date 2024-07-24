#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &v) {
    int min_diff = INT_MAX;
    int split_index = 0;

    for (int i = 1; i < v.size(); ++i) {
        int diff = abs(v[i] - v[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            split_index = i;
        }
    }

    vector<int> left_v = {v[0]};
    vector<int> right_v = v;

    for (int i = 1; i < split_index; ++i) {
        left_v.push_back(v[i]);
    }
    for (int i = split_index; i < right_v.size(); ++i) {
        right_v.pop_back();
    }

    return make_pair(left_v, right_v);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left Vector: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right Vector: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}