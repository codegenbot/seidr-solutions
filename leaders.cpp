#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    int n = v.size();
    res.push_back(v[n-1]);
    for (int i=n-2; i>=0; --i) {
        if (v[i] >= v[i+1])
            res.push_back(v[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}