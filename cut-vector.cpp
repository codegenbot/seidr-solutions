#include <climits>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    if(v.size() <= 1) {
        return {{}, {}};
    }
    
    int n = v.size();
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    
    long long leftSum = 0, rightSum = sum;
    int minDiff = INT_MAX, cutIndex = -1;

    for (int i = 0; i < n - 1; i++) {
        minDiff = INT_MAX, cutIndex = -1;
        long long diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i + 1; 
        }
        leftSum += v[i];
        rightSum -= v[i+1];
    }
    
    vector<vector<int>> res;
    res.push_back(vector<int>(v.begin(), v.begin() + cutIndex));
    for(int i = cutIndex; i < v.size(); i++) {
        res[1].push_back(v[i]);
    }
    
    if(res[0].size() > res[1].size()) {
        vector<int> temp = res[0];
        res[0] = res[1];
        res[1] = temp;
    }
    
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
    if(result[0].size() == 0) { 
        cout << "[";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "]" << endl;
        cout << "[";
        vector<int> empty;
        for(int i = 0; i < v.size(); i++) {
            empty.push_back(v[i]);
        }
        cout << "]";
    } else {
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