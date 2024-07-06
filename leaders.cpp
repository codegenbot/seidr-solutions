#include <vector>

vector<int> leaders(const vector<int>& v) {
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] < v[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) result.push_back(v[i]);
    }
    return result;
}