#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        if (left_sum == right_sum) {
            return {{}, vector<int>(v.begin(), v.end())};
        } else {
            int diff = abs(left_sum - right_sum);
            if (diff < min_diff) {
                min_diff = diff;
                result = {{}, {v.begin(), v.end()}};
            }
        }
    }
    return splitVector(result.second, min_diff);
}

pair<vector<int>, vector<int>> splitVector(vector<int> &v, int min_diff) {
    pair<vector<int>, vector<int>> result;
    for (int i = 1; i < v.size(); i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        if (abs(left_sum - right_sum) == min_diff) {
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
            return result;
        }
    }
    return {{}, {v.begin(), v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "[";
    for (const auto &x : res.first)
        cout << x << " ";
    cout << "] [";

    for (const auto &x : res.second)
        cout << x << " ";

    cout << "]" << endl;
    return 0;
}