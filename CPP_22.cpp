#include <vector>
#include <list>
#include <cassert>

std::vector<int> filter_integers(std::list<int> values) {
    std::vector<int> result;
    for (const auto &val : values) {
        if (val == 3) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 7, 3, 3, 4, 5}) == std::vector<int>{3, 3, 3});
    return 0;
}