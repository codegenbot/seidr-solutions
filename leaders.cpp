#include <vector>
using std::vector;

vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        bool isLeader = true;
        for (auto jt = it + 1; jt != v.rend(); ++jt) {
            if (*it < *jt) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) result.push_back(*it);
    }
    return result;
}