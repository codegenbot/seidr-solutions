#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    a.erase(vector<int>(unique(a.begin(), a.end()), a.end()));
    return a;
}