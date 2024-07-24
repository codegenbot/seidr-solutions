#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++)
            leftSum += vec[j];
        for (int j = i; j < vec.size(); j++)
            rightSum += vec[j];
        
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec(vec.begin(), vec.begin() + splitIndex);
    vector<int> rightVec(vec.begin() + splitIndex, vec.end());
    return {leftVec, rightVec};
}

int main() {
    int n; cin >> n;
    vector<int> vec(n+1);
    for (int i = 1; i <= n; i++) cin >> vec[i];
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "First subvector: ";
    for (auto x : result.first) cout << x << ' ';
    cout << '\n';
    cout << "Second subvector: ";
    for (auto x : result.second) cout << x << ' ';
    return 0;
}