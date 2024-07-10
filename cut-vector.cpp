#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<int, int> splitIndex;
    
    for (int i = 1; i < v.size(); i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        if (leftSum == rightSum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            splitIndex = {i, i};
        }
    }
    
    return {{0, splitIndex.first}, {splitIndex.second, v.size() - 1}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << result.first[i];
    }
    cout << "] [" << result.second[0];
    for (int i = 1; i < result.second.size(); i++) {
        cout << ", " << result.second[i];
    }
    cout << "]" << endl;
    
    return 0;
}