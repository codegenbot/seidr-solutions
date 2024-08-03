#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(abs(vec[i] - vec[i+1]) > (vec[i] - vec[0])) {
            result.push_back({vector<int>(vec.begin(), vec.begin() + i), vector<int>(vec.begin() + i, vec.end())});
            break;
        }
    }
    
    if(n > 0) {
        result.push_back({{vec[0]}, {vec}});
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