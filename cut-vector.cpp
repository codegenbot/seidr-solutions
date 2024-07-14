#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < v.size(); ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; ++j) left_sum += v[j];
        for (int j = i + 1; j < v.size(); ++j) right_sum += v[j];
        if ((left_sum == right_sum) || abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            idx = i;
        }
    }

    return {vector<int>(v.begin(), v.begin() + idx), vector<int>(v.begin() + idx, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "{";
    for (int i : res.first) cout << i << " ";
    cout << "}" << endl;
    cout << "{";
    for (int i : res.second) cout << i << " ";
    cout << "}" << endl;

    return 0;
}