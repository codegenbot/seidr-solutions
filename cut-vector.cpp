#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i < v.size(); i++) {
        int sum1 = accumulate(v.begin(), v.begin() + i, 0);
        int sum2 = accumulate(v.begin() + i, v.end(), 0);
        
        if ((sum1 == sum2) || abs(sum1 - sum2) < min_diff) {
            min_diff = abs(sum1 - sum2);
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (auto x : res.second) {
        cout << x << " ";
    }
    cout << "]0" << endl;
    
    return 0;
}