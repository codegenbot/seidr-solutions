#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<int> leftSum(n), rightSum(n);
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            leftSum[i] = vec[i];
            rightSum[i] = vec[i];
        } else {
            leftSum[i] = leftSum[i-1] + vec[i];
            rightSum[n-i-1] = rightSum[n-i] + vec[n-i-1];
        }
    }
    
    int minDiff = INT_MAX, splitIndex;
    for (int i = 0; i < n; i++) {
        if (abs(leftSum[i] - rightSum[n-i-1]) < minDiff) {
            minDiff = abs(leftSum[i] - rightSum[n-i-1]);
            splitIndex = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(splitIndex+1);
    for (int i = 0; i <= splitIndex; i++) {
        result[0][i] = vec[i];
    }
    result[1].resize(n-splitIndex-1);
    for (int i = 0; i < n-splitIndex-1; i++) {
        result[1][i] = vec[splitIndex+i+1];
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}