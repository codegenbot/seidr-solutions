#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= minDiff) {
            minDiff = abs(v[i] - v[i + 1]);
            splitIndex = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + splitIndex);
    res[1] = vector<int>(v.begin() + splitIndex, v.end());
    
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