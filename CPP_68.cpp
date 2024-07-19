#include <vector>
#include <algorithm>
#include <initializer_list>

std::vector<int> pluck(const std::vector<int>& v) {
    std::vector<int> result;
    for (int i : v) {
        if (i != 7) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}