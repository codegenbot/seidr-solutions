#include <vector>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    vector<int> result;
    int i = 0, j = a.size() - 1;
    while (i <= j) {
        result.push_back(a[i++]);
        if (i <= j) {
            result.push_back(a[j--]);
        }
    }
    return result;
}