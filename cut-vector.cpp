#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    vector<int> left;
    
    for(int i = 0; i < n; i++) {
        if(i == 0 || vec[i] != vec[i-1]) {
            if(left.size() > 0) {
                result.push_back(left);
                left.clear();
            }
            left.push_back(vec[i]);
        } else {
            if(left.size() > 0) {
                result.push_back(left);
                left.clear();
            }
            left.push_back(vec[i]);
        }
    }
    
    if(left.size() > 0) {
        result.push_back(left);
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