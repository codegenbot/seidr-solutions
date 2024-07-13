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
    
    long long avg = sum / n;
    
    long long leftSum = 0, rightSum = 0;
    int i = 0;
    while (i < n) {
        if (leftSum <= rightSum) {
            leftSum += v[i];
            i++;
        } else {
            rightSum += v[n - i - 1];
            i++;
        }
    }
    
    res.push_back(vector<int>(v.begin(), v.begin() + i));
    res.push_back(vector<int>(v.begin() + i, v.end()));
    
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