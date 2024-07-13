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
    
    long long avg = static_cast<long long>(sum / double(n));
    
    if (n * avg - sum > 0) {
        avg++;
    }
    
    long long leftSum = 0, rightSum = 0;
    int i = 0;
    while (i < n) {
        if (abs(leftSum - avg * (i + 1)) <= abs(rightSum - avg * (n - i))) {
            res.push_back(vector<int>(v.begin(), v.begin() + i + 1));
            leftSum += v[i];
            rightSum = sum - leftSum;
            i++;
        } else {
            res.push_back(vector<int>(v.begin(), v.begin() + i));
            res.push_back(vector<int>(v.begin() + i, v.end()));
            break;
        }
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