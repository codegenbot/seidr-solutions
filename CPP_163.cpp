#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}