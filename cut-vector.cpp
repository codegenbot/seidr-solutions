#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        vector<int> left, right;
        for (int j = 0; j <= i; j++) {
            left.push_back(v[j]);
        }
        for (int j = i + 1; j < n; j++) {
            right.push_back(v[j]);
        }
        
        int diff = abs((int)accumulate(left.begin(), left.end(), 0) - (int)accumulate(right.begin(), right.end(), 0));
        if (diff == 0 || (i > 0 && i < n-1 && diff <= abs((int)accumulate(v.begin(), v.begin() + i, 0) - (int)accumulate(v.begin() + i + 1, v.end(), 0)))) {
            result.first = left;
            result.second = right;
            break;
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
    cout << res.first.size();
    for (int num : res.first) {
        cout << " " << num;
    }
    cout << endl;
    cout << res.second.size();
    for (int num : res.second) {
        cout << " " << num;
    }
    cout << endl;
    
    return 0;
}