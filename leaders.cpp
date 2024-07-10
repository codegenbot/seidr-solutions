#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    int n = v.size();
    vector<int> res;
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] >= all_of(v.begin() + i, v.end())) {
            res.push_back(v[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}