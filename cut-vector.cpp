#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i-1] - v[i]);
        
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {vector<int>(v.begin(), v.begin() + cutIndex), vector<int>(v.begin() + cutIndex, v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}