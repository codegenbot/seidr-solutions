#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    int diff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < n-1; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i+1; j < n; j++) {
            rightSum += v[j];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }
    
    vector<int> leftSubvector(v.begin(), v.begin() + index + 1);
    vector<int> rightSubvector(v.begin() + index + 1, v.end());
    
    leftSubvector.push_back(0);
    rightSubvector.push_back(0);
    
    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> leftSubvector, rightSubvector;
    tie(leftSubvector, rightSubvector) = cutVector(v);
    
    for (int num : leftSubvector) {
        cout << num << endl;
    }
    
    for (int num : rightSubvector) {
        cout << num << endl;
    }
    
    return 0;
}