#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<vector<float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!std::equal(a[i].begin(), a[i].end(), b[i].begin())) return false;
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {})); 
}