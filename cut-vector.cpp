#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= minDiff) {
            minDiff = abs(v[i] - v[i + 1]);
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
        }
    }
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