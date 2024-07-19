#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

auto unique(vector<int>::iterator first, vector<int>::iterator last) {
    std::vector<int> result(first,last);
    std::sort(result.begin(),result.end());
    std::unique_ptr<std::vector<int>> ptr(new(std::make_unique<std::vector<int>>(result)));
    return *ptr;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5, 9, 123}));
    return 0;