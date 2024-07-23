#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    
    vector<int> left = {v.begin(), v.begin() + (v[0] == v[n-1]? 0: (v.begin()+1 - v.end()) * (-1)+1)};
    vector<int> right = {v.begin() + (v[0] == v[n-1]? 0: (v.begin()+1 - v.end()) * (-1)+1), v.end()};
    
    return {{left}, {right}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto& vec : res) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}