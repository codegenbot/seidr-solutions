```
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i < vec.size(); i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for (int k = i; k < vec.size(); k++) {
            rightSum += vec[k];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            result = {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }
    }
    
    return result;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        input.push_back(num);
    }
    
    pair<vector<int>, vector<int>> result = cutVector(input);
    
    cout << "[";
    for (auto x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for (auto x : result.second) {
        cout << x << " ";
    }
    cout << "]0]" << endl;
    
    return 0;
}