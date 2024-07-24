#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int split_idx = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    
    return {{v.begin(), v.begin() + split_idx}, {v.begin() + split_idx, v.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < result.second.size() - 1; i++) {
        cout << result.second[i] << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}