#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += v[j];
        for (int j = i; j < n; ++j)
            rightSum += v[j];
        
        if (leftSum == rightSum) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    int minDiff = INT_MAX, splitIndex = 0;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += v[j];
        for (int j = i; j < n; ++j)
            rightSum += v[j];
        
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            splitIndex = i;
        }
    }
    
    res.first = vector<int>(v.begin(), v.begin() + splitIndex);
    res.second = vector<int>(v.begin() + splitIndex, v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    
    cout << "Left: ";
    for (int num : res.first)
        cout << num << " ";
    cout << endl;
    
    cout << "Right: ";
    for (int num : res.second)
        cout << num << " ";
    cout << endl;
    
    return 0;
}