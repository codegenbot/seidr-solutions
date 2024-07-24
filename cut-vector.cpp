#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    vector<vector<int>> result;
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i = 0; i < vec.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j <= i; j++) {
            leftSum += vec[j];
        }
        
        for(int k = i + 1; k < vec.size(); k++) {
            rightSum += vec[k];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff == minDiff) {
            index = i;
        } else if(diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> leftVec;
    for(int i = 0; i <= index; i++) {
        leftVec.push_back(vec[i]);
    }
    result.push_back(leftVec);
    
    vector<int> rightVec;
    for(int i = index + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }
    result.push_back(rightVec);
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    
    for(auto v : res) {
        for(auto num : v) {
            cout << num;
        }
        cout << endl;
    }
    
    return 0;
}