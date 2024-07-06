#include <vector>

vector<int> leaders(const vector<int>& v) {
    if (v.empty()) {
        return {};
    }
    vector<int> result;
    int currentLeader = v.back();
    for (int i = v.size() - 2; i >= 0; i--) {
        if (currentLeader < v[i]) {
            currentLeader = v[i];
            result.push_back(currentLeader);
        }
    }
    return result;
}