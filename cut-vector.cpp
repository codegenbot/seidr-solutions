#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;

    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }

        if (left_sum == right_sum) {
            return {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "Left: ";
    for (int i = 0; i < res.first.size(); i++) {
        cout << res.first[i] << " ";
    }
    cout << endl;

    cout << "Right: ";
    for (int i = 0; i < res.second.size(); i++) {
        cout << res.second[i] << " ";
    }
    cout << endl;

    return 0;
}