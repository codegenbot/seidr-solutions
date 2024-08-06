#include <vector>
#include <list>
#include <any>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::list<std::any>& values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (auto int_val = std::any_cast<int>(&val)) {
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b = filter_integers({1, 2, 3, 4, 5});

    assert(issame(a, b));

    return 0;
}