#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) break;
    }
    return {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
}