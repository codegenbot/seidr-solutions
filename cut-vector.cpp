#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int index = -1;
    for (int i = 0; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        if (left_sum == right_sum) {
            return {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
        } else {
            int diff = abs(left_sum - right_sum);
            if (diff < min_diff) {
                min_diff = diff;
                index = i;
            }
        }
    }
    return {vector<int>(v.begin(), v.begin() + index), vector<int>(v.begin() + index, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "1 ";
    for (int num : res.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "0 ";
    for (int num : res.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}