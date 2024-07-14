#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int minDiff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; ++j)
            leftSum += v[j];
        for (int j = i + 1; j < v.size(); ++j)
            rightSum += v[j];

        if (leftSum == rightSum) {
            return {{v[0]}, v.substr(1)};
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    std::vector<int> left(v.begin(), v.begin() + pos);
    std::vector<int> right(v.begin() + pos, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; ++i)
        cin >> v[i];
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "{";
    for (int i = 0; i < res.first.size(); ++i) {
        if (i > 0)
            cout << ", ";
        cout << res.first[i];
    }
    cout << "}" << endl;
    cout << "{";
    for (int i = 0; i < res.second.size(); ++i) {
        if (i > 0)
            cout << ", ";
        cout << res.second[i];
    }
    cout << "}" << endl;
    return 0;
}