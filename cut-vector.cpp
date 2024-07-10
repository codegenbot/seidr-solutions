#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int idx = -1;
    
    for(int i=0; i<n-1; i++) {
        int diff = abs(v[i] - v[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    vector<int> left, right;
    left.assign(v.begin(), v.begin() + idx);
    right.assign(v.begin() + idx, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << "0]" << endl;

    return 0;
}