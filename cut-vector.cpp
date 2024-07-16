```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            res[0].insert(res[0].end(), v.begin() + i, v.end());
            return {{}, vector<int>(v.begin(), v.begin() + i)};
        }
    }
    int mid = n / 2;
    res[0] = vector<int>(v.begin(), v.begin() + mid);
    res[1] = vector<int>(v.begin() + mid, v.end());
    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    vector<vector<int>> res = cutVector(v);
    for (auto vec : res) {
        cout << "[";
        for (int i : vec) {
            cout << i;
            if (i < vec.back()) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}