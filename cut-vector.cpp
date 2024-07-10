#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<int, int> splitIndex;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        
        for (int k = i + 1; k < vec.size(); k++) {
            rightSum += vec[k];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = make_pair(i, i);
        }
    }
    
    vector<int> leftVec(splitIndex.first + 1);
    for (int i = 0; i <= splitIndex.first; i++) {
        leftVec[i] = vec[i];
    }
    
    vector<int> rightVec;
    for (int i = splitIndex.second + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }
    
    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "[";
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << " ";
    }
    cout << "] [";
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}