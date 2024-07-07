#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += v[j];
        for (int j = i; j < n; ++j)
            rightSum += v[j];
        
        if (leftSum == rightSum) {
            return {{v[0], i}, {v.begin() + i, v.end()}};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cutIndex);
    vector<int> right(v.begin() + cutIndex, v.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result.first.size(); ++i) {
        cout << result.first[i];
        if (i < result.first.size() - 1)
            cout << " ";
    }
    cout << "] [";
    for (int i = 0; i < result.second.size(); ++i) {
        cout << result.second[i];
        if (i < result.second.size() - 1)
            cout << " ";
    }
    cout << "]" << endl;
    
    return 0;
}