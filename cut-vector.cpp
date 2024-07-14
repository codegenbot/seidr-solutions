#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        if (i < v.size()) {
            rightSum = accumulate(v.begin() + i, v.end(), 0);
        }
        
        if (i > 0) {
            leftSum = accumulate(v.begin(), v.begin() + i, 0);
        } else {
            leftSum = 0;
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec(v.begin(), v.begin() + splitIndex);
    vector<int> rightVec(splitIndex > 0 ? v.begin() + splitIndex : vector<int>(), v.end());
    
    return {leftVec, rightVec};
}

int main() {
    // Example inputs
    vector<int> v1 = {1};
    vector<int> v2 = {1, 10};
    vector<int> v3 = {1, 100};
    vector<int> v4 = {1, 1000};
    vector<int> v5 = {1, 10000};
    
    pair<vector<int>, vector<int>> res1 = cutVector(v1);
    pair<vector<int>, vector<int>> res2 = cutVector(v2);
    pair<vector<int>, vector<int>> res3 = cutVector(v3);
    pair<vector<int>, vector<int>> res4 = cutVector(v4);
    pair<vector<int>, vector<int>> res5 = cutVector(v5);
    
    // Print results
    cout << "Input: ";
    for (int i : v1) cout << i << ' ';
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left: ";
    for (int i : res1.first) cout << i << ' ';
    cout << endl;
    cout << "Right: ";
    for (int i : res1.second) cout << i << ' ';
    cout << endl << endl;
    
    cout << "Input: ";
    for (int i : v2) cout << i << ' ';
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left: ";
    for (int i : res2.first) cout << i << ' ';
    cout << endl;
    cout << "Right: ";
    for (int i : res2.second) cout << i << ' ';
    cout << endl << endl;
    
    cout << "Input: ";
    for (int i : v3) cout << i << ' ';
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left: ";
    for (int i : res3.first) cout << i << ' ';
    cout << endl;
    cout << "Right: ";
    for (int i : res3.second) cout << i << ' ';
    cout << endl << endl;
    
    cout << "Input: ";
    for (int i : v4) cout << i << ' ';
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left: ";
    for (int i : res4.first) cout << i << ' ';
    cout << endl;
    cout << "Right: ";
    for (int i : res4.second) cout << i << ' ';
    cout << endl << endl;
    
    cout << "Input: ";
    for (int i : v5) cout << i << ' ';
    cout << endl;
    cout << "Output:" << endl;
    cout << "Left: ";
    for (int i : res5.first) cout << i << ' ';
    cout << endl;
    cout << "Right: ";
    for (int i : res5.second) cout << i << ' ';
    cout << endl;
    
    return 0;
}