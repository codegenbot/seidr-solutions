#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for(int i=0; i<n-1; i++) {
        if(v[i] == v[i+1]) {
            res[0].insert(res[0].end(), v.begin(), v.begin() + i + 1);
            res[1].insert(res[1].begin(), v.begin() + i + 1, v.end());
            return res;
        }
    }
    
    int minDiff = INT_MAX, cutIndex = -1;
    for(int i=0; i<n-1; i++) {
        int diff = abs(v[i] - v[i+1]);
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    res[0].insert(res[0].end(), v.begin(), v.begin() + cutIndex + 1);
    res[1].insert(res[1].begin(), v.begin() + cutIndex + 1, v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for(auto& vec : res) {
        for(int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}