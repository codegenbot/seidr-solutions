#include <vector>

bool issame(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        result.push_back(abs(a[i] - b[i]));
    }
    return compare(a, b) == result;
}