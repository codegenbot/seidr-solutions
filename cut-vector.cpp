#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for(int i = 0; i < n; i++) {
        if(i == n - 1 || vec[i] != vec[i+1]) {
            vector<int> left = vector<int>();
            for(int j = 0; j <= i; j++) {
                left.push_back(vec[j]);
            }
            vector<int> right = vector<int>();
            for(int j = i + 1; j < n; j++) {
                right.push_back(vec[j]);
            }
            result.push_back({left, right});
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
        cout << "Left: ";
        for(auto x : v[0]) {
            cout << x << " ";
        }
        cout << endl;
        cout << "Right: ";
        for(auto x : v[1]) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}