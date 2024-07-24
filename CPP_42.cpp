#include <vector>
#include <cassert>

namespace my_namespace {
    std::vector<int> incr_list(const std::vector<int>& input);
    bool issame(const std::vector<int>& a, const std::vector<int>& b);
}

std::vector<int> my_namespace::incr_list(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        result.push_back(num + 1);
    }
    return result;
}

bool my_namespace::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(my_namespace::issame(my_namespace::incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
}