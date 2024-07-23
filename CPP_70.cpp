#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(strange_sort_list({1, 2, 3}), {1, 2, 3}));
    return 0;
}