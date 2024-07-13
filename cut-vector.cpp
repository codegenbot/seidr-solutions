#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    vector<int> left = {v[0]};
    for (int i = 0; i < cut_index; i++) {
        left.push_back(v[i + 1]);
    }
    vector<int> right = {v[cut_index + 1]};
    for (int i = cut_index + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    return make_pair(left, right);
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
        if (i > 0) {
            cout << ", ";
        }
        cout << result.first[i];
    }
    cout << "], [";
    for (int i = 0; i < result.second.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << result.second[i];
    }
    cout << "]" << endl;
    return 0;
}