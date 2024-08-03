#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < n-1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left = vector<int>(vec.begin(), vec.begin() + pos);
    vector<int> right = vector<int>(vec.begin() + pos, vec.end());
    
    result.push_back(left);
    result.push_back(right);
    
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
        for(auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}