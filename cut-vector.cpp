#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int diff = abs(v[i] - v[i + 1]);
        if (diff <= min_diff) {
            min_diff = diff;
            pos = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < pos; i++) {
        left.push_back(v[i]);
    }
    for (int i = pos + 1; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    auto res = cutVector(v);

    cout << "Left: ";
    for (int x : res.first) cout << x << " ";
    cout << endl;
    
    cout << "Right: ";
    for (int x : res.second) cout << x << " ";
    cout << endl;
    
    return 0;
}