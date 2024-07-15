```c++
#include <vector>
#include <iostream>
#include <pair>

using namespace std;

vector<int> cutVector(vector<int>& v) {
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
    
    vector<int> left, right;
    for(int i=0; i<pos; i++) left.push_back(v[i]);
    for(int i=pos; i<n; i++) right.push_back(v[i]);
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    
    vector<pair<vector<int>, vector<int>>> result;
    result.push_back({cutVector(v)});
    
    cout << "Left: ";
    for(int x : result[0].first) cout << x << ' ';
    cout << '\n';
    cout << "Right: ";
    for(int x : result[0].second) cout << x << ' ';
    cout << '\n';

    return 0;
}