#include <vector>
vector<int> common(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}