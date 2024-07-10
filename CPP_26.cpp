#include <algorithm>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> unique_v(v.begin(), v.end());
    unique_v.erase(unique_v.begin() + 1, unique_v.end());
    return unique_v;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == ({1, 4, 5}));
    return 0;
}