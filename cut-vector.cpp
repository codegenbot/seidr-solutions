#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n - 1; i++) {
        if (v[i] == v[i + 1]) {
            result.push_back({v[i]});
            return {{}, {v[i], v[i + 1]}};
        }
    }
    
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    result.push_back({v[0]});
    result.push_back({v.begin() + 1, v.end()});
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    
    cout << "[";
    for (auto x : res[0]) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (auto x : res[1]) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    return 0;
}