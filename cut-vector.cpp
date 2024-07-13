#include <climits>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    
    long long leftSum = 0, rightSum = 0;
    int left = 0, right = n - 1;
    int leftMin = INT_MAX, rightMin = INT_MAX;

    for (int i = 0; i < n; i++) {
        leftSum += v[i];
        
        if (abs(leftSum - (sum - leftSum)) < leftMin) {
            leftMin = abs(leftSum - (sum - leftSum));
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        rightSum += v[i];
        
        if (abs(rightSum - (sum - rightSum)) < rightMin) {
            rightMin = abs(rightSum - (sum - rightSum));
        }
    }

    long long diffLeft = abs(leftSum - sum / 2);
    long long diffRight = abs(rightSum - sum / 2);

    int cutIndex;
    if (diffLeft <= diffRight) {
        cutIndex = left;
    } else {
        cutIndex = right;
    }
    
    res.push_back(vector<int>(v.begin(), v.begin() + cutIndex));
    res.push_back(vector<int>(v.begin() + cutIndex, v.end()));
    
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