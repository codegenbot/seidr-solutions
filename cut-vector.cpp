#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int index = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    return {{v.begin(), v.begin() + index}, {v.begin() + index, v.end()}};
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<vector<int>> result = cutVector(v);
    cout << "{";
    for (auto num : result[0]) {
        cout << num << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (auto num : result[1]) {
        cout << num << " ";
    }
    cout << "0" << endl;
    return 0;
}