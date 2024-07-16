```c++
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 5, 6, 7, 8};
    vector<vector<int>> res = cutVector(v);
    
    for (int i = 0; i < res.size(); ++i) {
        cout << "Subvector " << i + 1 << ": ";
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            res[0].insert(res[0].end(), v.begin(), v.end());
            return {{}, res[0]};
        }
    }
    
    int mid = n / 2;
    res[0] = vector<int>(v.begin(), v.begin() + mid);
    res[1] = vector<int>(v.begin() + mid, v.end());
    
    return res;
}