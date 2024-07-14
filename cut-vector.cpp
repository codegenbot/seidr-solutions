#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int index = 0;
    
    for(int i = 1; i < n; i++) {
        int diff = abs(v[i-1] - v[i]);
        if(diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + index);
    vector<int> right(v.begin() + index, v.end());
    return {left, right};
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