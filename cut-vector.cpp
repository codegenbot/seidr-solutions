#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    if (n == 0) {
        res.push_back({});
        res.push_back({});
        return res;
    }
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += v[j];
        }
        
        if (leftSum == rightSum) {
            res.push_back({v.begin(), v.begin() + i});
            res.push_back({v.begin() + i, v.end()});
            return res;
        } else if (abs(leftSum - rightSum) < abs(leftSum - rightSum - v[i])) {
            res.push_back({v.begin(), v.begin() + i});
            res.push_back({v.begin() + i, v.end()});
            return res;
        }
    }
    
    res.push_back({{1}});
    res.push_back(v);
    return res;
}

int main() {
    vector<int> v = {1};
    vector<vector<int>> result = cutVector(v);
    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}