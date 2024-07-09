#include <vector>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), greater<int>());
    vector<int> result(a.begin(), a.begin() + b);
    return result;
}