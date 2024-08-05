#include <algorithm>
#include <vector>
#include <iterator>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> test1 = {1, 2, 3};
    std::vector<int> test2 = {1, 2, 3};

    bool same = issame(test1, test2);

    return 0;
}