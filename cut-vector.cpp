#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(abs(vec[i] - vec[i+1]) > (vec[n-1] - vec[0])) {
            result.push_back({&vec[0], 0, i});
            result.push_back({&vec[i], 0, n-i-1});
            break;
        }
    }
    
    if(result.empty()) {
        result.push_back({&vec[0], 0, n-1});
    }
    
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