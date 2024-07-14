#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for(int j = i; j < n; j++) {
            rightSum += vec[j];
        }
        
        if(leftSum == rightSum) {
            res.first = vector<int>(vec.begin(), vec.begin() + i);
            res.second = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
    }
    
    int minDiff = INT_MAX, cutIndex = 0;
    for(int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for(int j = i; j < n; j++) {
            rightSum += vec[j];
        }
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    res.first = vector<int>(vec.begin(), vec.begin() + cutIndex);
    res.second = vector<int>(vec.begin() + cutIndex, vec.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    cout << "[";
    for(int i = 0; i < res.first.size(); i++) {
        cout << res.first[i] << " ";
    }
    cout << "] [" ;
    for(int i = 0; i < res.second.size(); i++) {
        cout << res.second[i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}