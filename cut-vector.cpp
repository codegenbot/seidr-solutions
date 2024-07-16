```c++
#include <vector>
#include <cmath>
#include <iostream> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    if (n == 1) {
        return {{v}, {}};
    }
    
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            int midIndex = i;
            for (int j = 0; j < i; ++j) {
                res[0].push_back(v[j]);
            }
            for (int j = i; j < n; ++j) {
                res[1].push_back(v[j]);
            }
            return {{}, res[0], {}, res[1]};
        }
    }
    
    int mid = n / 2;
    res[0] = vector<int>(v.begin(), v.begin() + mid);
    res[1] = vector<int>(v.begin() + mid, v.end());
    return res;
}

int main() {
    vector<int> v = {2, 1, 3};
    auto res = cutVector(v);
    for (const auto& sub : res) {
        cout << "[";
        for (const auto& num : sub) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}