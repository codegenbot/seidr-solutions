#include <vector>

vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        bool isLeader = true;
        for (auto jt = it + 1; jt != v.rend() && *jt > *it; ++jt) {
            if (*jt <= *it) {
                isLeader = false;
                break;
            }
        }
        if (isLeader || it == v.rbegin()) result.push_back(*it);
    }
    return result;
}