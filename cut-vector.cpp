#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= v.size(); ++i) {
        int sumLeft = 0, sumRight = 0;
        for (int j = 0; j < i; ++j) {
            sumLeft += v[j];
        }
        for (int j = i; j < v.size(); ++j) {
            sumRight += v[j];
        }
        int diff = abs(sumLeft - sumRight);
        if (diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + idx);
    vector<int> right(v.begin() + idx, v.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0]" << endl;
    return 0;
}