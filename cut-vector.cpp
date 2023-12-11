#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& input) {
    int n = input.size();
    int diff = INT_MAX;
    int idx = -1;
    
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += input[j];
        }
        
        for (int j = i; j < n; j++) {
            rightSum += input[j];
        }
        
        if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
            idx = i;
        }
    }
    
    vector<int> leftVector(input.begin(), input.begin() + idx);
    vector<int> rightVector(input.begin() + idx, input.end());
    
    return make_pair(leftVector, rightVector);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(input);
    
    for (int i = 0; i < result.first.size(); i++) {
        cout << result.first[i] << endl;
    }
    
    for (int i = 0; i < result.second.size(); i++) {
        cout << result.second[i] << endl;
    }
    
    return 0;
}