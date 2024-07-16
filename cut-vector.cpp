#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> result;
    
    for (int i = 1; i <= n; i++) {
        if (i == n || abs(v[i] - v[0]) > abs(v[n-i-1] - v[0])) {
            result.push_back({v.begin(), v.begin() + i});
            break;
        }
        else {
            result.push_back({v.begin(), v.begin() + i});
            v.erase(v.begin());
        }
    }
    
    if (!v.empty()) {
        result.push_back({v.begin(), v.end()});
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (vector<int>& vec : res) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;