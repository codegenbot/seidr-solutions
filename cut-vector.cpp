#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n - 1; i++) {
        if(abs(vec[i] - vec[i+1]) > abs(vec[0] - vec[n-1])) {
            vector<int> left;
            vector<int> right;
            
            for(int j = 0; j <= i; j++) {
                left.push_back(vec[j]);
            }
            for(int k = i + 1; k < n; k++) {
                right.push_back(vec[k]);
            }
            
            result.push_back(left);
            result.push_back(right);
            break;
        }
    } else {
        vector<int> left;
        vector<int> right;
        
        for(int j = 0; j < n - 1; j++) {
            left.push_back(vec[j]);
        }
        right.push_back(vec[n-1]);
        
        result.push_back(left);
        result.push_back(right);
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