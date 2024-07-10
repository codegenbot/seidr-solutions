#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int leftSum = 0;
    int rightSum = accumulate(v.begin(), v.end(), 0);
    
    for(int i = 0; i < n; i++) {
        rightSum -= v[i];
        if(leftSum == rightSum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
        leftSum += v[i];
    }
    
    int minDiff = INT_MAX;
    vector<int> left;
    vector<int> right;
    
    for(int i = 0; i < n; i++) {
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            left = {v.begin(), v.begin() + i};
            right = {v.begin() + i, v.end()};
        }
        leftSum -= v[i];
        rightSum += v[i];
    }
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for(int i = 0; i < res.first.size() - 1; i++) {
        cout << res.first[i] << ", ";
    }
    if(res.first.size() > 0) {
        cout << res.first.back();
    }
    cout << "] [";
    for(int i = 0; i < res.second.size() - 1; i++) {
        cout << res.second[i] << ", ";
    }
    if(res.second.size() > 0) {
        cout << res.second.back();
    }
    cout << "]\n";
    
    return 0;
}