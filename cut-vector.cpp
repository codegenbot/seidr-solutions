#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(abs(vec[i] - vec[i+1]) > (vec[n-1] - vec[0])) {
            vector<int> v1;
            for(int j = 0; j <= i; j++) {
                v1.push_back(vec[j]);
            }
            vector<int> v2;
            for(int j = i + 1; j < n; j++) {
                v2.push_back(vec[j]);
            }
            result = {{v1}, {v2}};
            return result;
        }
    }
    
    vector<int> v1;
    for(int j = 0; j < n; j++) {
        v1.push_back(vec[j]);
    }
    vector<int> v2;
    result = {{v1}, {}};
    
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