#include <algorithm>
#include <vector>
#include <assert.h>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> v) {
    std::vector<int> unique_v;
    for (int i : v) {
        if (std::find_if(unique_v.begin(), unique_v.end(),
                         [i](const int& x) { return x == i; }) == unique_v.end())
            unique_v.push_back(i);
    }
    return unique_v;
}

int main() {
    assert(isSame(std::vector<int>({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 4, 5})));
    return 0;
}