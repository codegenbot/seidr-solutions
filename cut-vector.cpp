```c++
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i=0; i<n-1; i++){
        int diff = abs(v[i] - v[i+1]);
        if(diff < minDiff){
            minDiff = diff;
            pos = i;
        }
    }
    
    pair<vector<int>, vector<int>> result;
    vector<int> left, right;
    for(int i=0; i<pos; i++) left.push_back(v[i]);
    for(int i=pos; i<n; i++) right.push_back(v[i]);
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for(int x : result.first) cout << x << ' ';
    cout << '\n';
    cout << "Right: ";
    for(int x : result.second) cout << x << ' ';
    cout << '\n';
    
    return 0;
}