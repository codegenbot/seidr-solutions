#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size(); i++) {
        vector<int> left(v.begin(), v.begin() + i);
        vector<int> right(v.begin() + i, v.end());
        
        int diff = abs((int)accumulate(left.begin(), left.end(), 0) - (int)accumulate(right.begin(), right.end(), 0));
        
        if (diff < min_diff) {
            min_diff = diff;
            result = {left, right};
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
    cout << accumulate(res.first.begin(), res.first.end(), 0) << endl;
    cout << accumulate(res.second.begin(), res.second.end(), 0) << endl;
    
    return 0;
}