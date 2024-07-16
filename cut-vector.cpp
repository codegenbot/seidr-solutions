```cpp
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int min_diff = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= min_diff) {
            min_diff = abs(v[i] - v[i + 1]);
            res[0].insert(res[0].end(), v.begin(), v.end());
            return {{}, res[0]};
        }
    }
    int mid = n / 2;
    res[0] = vector<int>(v.begin(), v.begin() + mid);
    res[1] = vector<int>(v.begin() + mid, v.end());
    return res;
}

int main() {
    vector<int> v = {5, 7, 3, 9, 6};
    vector<vector<int>> res = cutVector(v);
    for(int i=0; i<2; i++) {
        cout << "Subvector " << i+1 << ": ";
        for(auto x : res[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}