#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i=1; i<v.size(); i++) {
        int diff = abs(v[i-1] - v[i]);
        if(diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cutIndex);
    result[1].resize(v.size() - cutIndex);
    
    copy(v.begin(), v.begin() + cutIndex, result[0].begin());
    copy(v.begin() + cutIndex, v.end(), result[1].begin());
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> res = cutVector(v);
    
    for(auto &v : res) {
        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}