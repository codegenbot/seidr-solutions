#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = 0;
    
    for(int i = 1; i <= v.size(); i++) {
        if(i == v.size() || v[i-1] != v[i]) {
            int diff = abs(v[i-1] - v[0]);
            if(diff < min_diff) {
                min_diff = diff;
                idx = i;
            }
        }
    }
    
    vector<int> left(v.begin(), v.begin()+idx);
    vector<int> right(v.begin()+idx, v.end());
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}