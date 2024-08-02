#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for (int i = 0; i < result.size(); ++i) {
        result[i]++;
    }
    return result;
}