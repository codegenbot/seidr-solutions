#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i + 1; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff == 0 || diff < minDiff) {
            minDiff = diff;
            result.first = vector<int>(v.begin(), v.begin() + i + 1);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    
    cout << "[";
    for (int i = 0; i < res.first.size(); i++) {
        cout << res.first[i] << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (int i = 0; i < res.second.size(); i++) {
        cout << res.second[i] << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}