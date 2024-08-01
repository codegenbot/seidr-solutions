#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= v.size(); ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j)
            sum1 += v[j];
        for (int j = i; j < v.size(); ++j)
            sum2 += v[j];
        if (sum1 == sum2) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    vector<int> part1(v.begin(), v.begin() + idx);
    vector<int> part2(v.begin() + idx, v.end());
    return {part1, part2};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    for (const auto &x : result.first)
        cout << x << " ";
    cout << endl;
    for (const auto &x : result.second)
        cout << x << " ";
    cout << endl;

    return 0;
}