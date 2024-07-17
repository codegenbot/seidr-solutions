#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for(int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        
        for(int j = i + 1; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    
    for(int i = 0; i <= splitIndex; i++) {
        leftVec.push_back(vec[i]);
    }
    
    for(int i = splitIndex + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &x : vec) cin >> x;
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "First vector: ";
    for(int i : result.first) cout << i << " ";
    cout << endl;
    cout << "Second vector: ";
    for(int i : result.second) cout << i << " ";
    cout << endl;
    return 0;
}