#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; i++) {
        vector<int> left, right;
        for (int j = 0; j <= i; j++) {
            left.push_back(v[j]);
        }
        for (int j = i + 1; j < n; j++) {
            right.push_back(v[j]);
        }
        
        int diff = abs((int)accumulate(left.begin(), left.end(), 0) - (int)accumulate(right.begin(), right.end(), 0));
        if (diff == 0 || (i > 0 && diff <= abs((int)accumulate(v.begin() + i, v.end(), 0) - (int)accumulate(v.begin(), v.end(), 0)))) {
            res = {left, right};
            break;
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "Left: ";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}