#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }
        
        if (leftSum == rightSum) {
            result.push_back({v.begin(), v.begin() + i + 1});
            result.push_back({v.begin() + i + 1, v.end()});
            return result;
        }
    }
    
    int minDiff = INT_MAX, cutIndex = -1;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    result.push_back({v.begin(), v.begin() + cutIndex + 1});
    result.push_back({v.begin() + cutIndex + 1, v.end()});
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}