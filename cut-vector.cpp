#include <climits>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    
    if(sum > ::numeric_limits<long long>::max() || sum < 0) {
        return {{}, {}};
    }
    
    long long leftSum = 0, rightSum = sum;
    int minDiff = INT_MAX, cutIndex = -1;

    for (int i = 1; i < n - 1; i++) {
        if (rightSum == leftSum) break;
        rightSum -= v[i];
        
        long long diff = abs(leftSum - rightSum);
        if (diff <= minDiff || (diff == minDiff && leftSum >= rightSum)) {
            minDiff = diff;
            cutIndex = i + 1; 
        }
        
        leftSum += v[i];
    }
    
    vector<vector<int>> res;
    res.push_back(vector<int>(v.begin(), v.begin() + cutIndex));
    for(int i = cutIndex; i < v.size(); i++) {
        res[1].push_back(v[i]);
    }
    res[0] = vector<int>(v.begin(), v.begin() + cutIndex);
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}