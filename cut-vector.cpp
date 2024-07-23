#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i] - vec[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    return {{vec.begin(), next(vec.begin(), idx)}, {next(vec.begin(), idx), vec.end()}};
}

int main() {
    vector<int> vec;
    int num;
    cin >> num;
    while(num--) {
        cin >> num;
        vec.push_back(num);
    }
    pair<vector<int>, vector<int>> res = cutVector(vec);
    for (auto x : res.first) cout << x << " ";
    cout << endl;
    for (auto x : res.second) cout << x << " ";
    return 0;
}