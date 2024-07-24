#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += vec[j];
        for (int j = i; j < n; ++j)
            rightSum += vec[j];
        
        if (leftSum == rightSum) {
            return {{vec[0], vec[1]}, vec.substr(2)};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < splitIndex; ++i)
        left.push_back(vec[i]);
    for (int i = splitIndex; i < n; ++i)
        right.push_back(vec[i]);
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &x : vec) cin >> x;
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "{";
    for (int i = 0; i < result.first.size(); ++i)
        cout << result.first[i] << " ";
    cout << "}, {";
    for (int i = 0; i < result.second.size(); ++i)
        cout << result.second[i] << " ";
    cout << "0}" << endl;
    return 0;
}