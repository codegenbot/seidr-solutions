Here is the completed code:

#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        bool is_leader = true;
        for (int j = i + 1; j < n; j++) {
            if (v[j] >= v[i]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) res.push_back(v[i]);
    }
    return res;
}