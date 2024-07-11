#include <vector>
#include <algorithm>

vector<int> issame(vector<int> a, int k) {
    sort(a.begin(), a.end(), greater<int>());
    vector<int> result(a.begin(), a.begin() + k);
    return result;
}