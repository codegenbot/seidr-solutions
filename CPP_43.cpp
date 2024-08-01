#include <vector>
#include <cassert>
#include <cstddef>

bool pairs_sum_to_zero(std::vector<int> l) {
    size_t i, j;
    for (i = 0; i < l.size(); ++i) {
        for (j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    // Additional test cases can be added here
    return 0;
}