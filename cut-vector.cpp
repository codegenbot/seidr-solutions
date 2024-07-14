#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j) {
            leftSum += v[j];
        }
        
        for (int j = i; j < v.size(); ++j) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << "] [";
    for (auto x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    return 0;
}