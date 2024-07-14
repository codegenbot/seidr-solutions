#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0;
        
        for (int j = 0; j <= i; ++j) {
            sum1 += v[j];
        }
        
        for (int j = i + 1; j < n; ++j) {
            sum2 += v[j];
        }
        
        int diff = abs(sum1 - sum2);
        
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    
    vector<int> left, right;
    
    for (int i = 0; i <= idx; ++i) {
        left.push_back(v[i]);
    }
    
    for (int i = idx + 1; i < n; ++i) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "Left: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Right: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}