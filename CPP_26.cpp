#include <algorithm>
#include <vector>

bool areEqualArrays(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> unique_v;
    for (int i : v) {
        if (std::find_if(unique_v.begin(), unique_v.end(),
                         [i](const int& x) { return x == i; }) == unique_v.end())
            unique_v.push_back(i);
    }
    return unique_v;
}

int main() {
    assert(areEqualArrays(std::vector<int>({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 4, 5})));
    return 0;
}