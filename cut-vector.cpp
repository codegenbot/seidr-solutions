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
    
    if(sum == 0) return {{v[0]}, {v}};
    
    if(sum > std::llabs(0) || sum < 0) {
        return {{}, {}};
    }
    
    long long leftSum = 0, rightSum = sum;
    int minDiff = INT_MAX, cutIndex = -1;

    for (int i = 1; i < n; i++) {
        rightSum -= v[i];
        
        if(rightSum == leftSum) break;
        
        long long diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
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
    if(n > 1) {
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
    } else {
        int x;
        cin >> x;
        vector<int> v(1);
        v[0] = x;
        
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
    }
    
    return 0;
}