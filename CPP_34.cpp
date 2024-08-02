#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // implement your comparison logic here
    // for example, you can compare sizes or contents of vectors
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> unique(vector<int> l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    auto it = unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result;
}