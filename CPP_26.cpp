#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> unique;
    unique.reserve(v.size());
    for (int x : v) {
        if (std::find_first_of(unique.begin(), unique.end(), x) == unique.end()) {
            unique.push_back(x);
        }
    }
    return unique;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}