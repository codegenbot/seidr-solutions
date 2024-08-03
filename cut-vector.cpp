```cpp
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < n - 1; i++) {
        if(abs(vec[i] - vec[i+1]) < minDiff) {
            minDiff = abs(vec[i] - vec[i+1]);
            pos = i + 1;
        }
    }
    
    result.push_back({vec, 0, pos});
    result.push_back({{vec.begin() + pos}, (pos) , n});
    
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