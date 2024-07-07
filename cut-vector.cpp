#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    for (int i = 1; i < n; i++) {
        if (vec[i] - vec[0] == vec[i-1] - vec[0]) {
            result.push_back({vec.begin(), vec.begin() + i});
            vec.erase(vec.begin());
            break;
        }
    }
    
    result.push_back({vec.begin(), vec.end()});
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> res = cutVector(vec);
    
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;