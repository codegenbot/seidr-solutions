#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += v[j];
        
        for (int j = i; j < v.size(); ++j)
            rightSum += v[j];
        
        if (leftSum == rightSum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            result = {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        }
    }
    
    return result;
}

int main() {
    vector<int> v; // read input from user
    pair<vector<int>, vector<int>> output = cutVector(v);
    for (const auto& vec : output) {
        for (int num : vec)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}