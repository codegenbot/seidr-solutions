#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_idx = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + cut_idx), vector<int>(v.begin() + cut_idx, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "First subvector: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}