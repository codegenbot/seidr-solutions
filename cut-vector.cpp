#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(vec[i] != vec[i+1]) {
            result.push_back({{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}});
            break;
        }
    }
    
    if(result.empty()) {
        result.push_back({{vec.begin(), vec.end()}, {}});
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
        for(auto x : v[0]) {
            cout << x << " ";
        }
        cout << endl;
        if(v.size() > 1) {
            for(auto x : v[1]) {
                cout << x << " ";
            }
            cout << endl;
        } else {
            cout << endl;
        }
    }
    
    return 0;
}