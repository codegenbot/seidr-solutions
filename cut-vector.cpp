#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n; i++) {
        if(i == n - 1 || vec[i] != vec[i+1]) {
            vector<int> left, right;
            for(int j = 0; j <= i; j++) {
                left.push_back(vec[j]);
            }
            for(int j = i + 1; j < n; j++) {
                right.push_back(vec[j]);
            }
            result.push_back(left);
            result.push_back(right);
            break;
        }
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