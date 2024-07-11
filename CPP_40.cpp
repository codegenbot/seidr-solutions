#include <vector>
#include <cassert>

bool triples_sum_to_zero(const std::vector<int>& l) {
    size_t n = l.size();
    for (size_t i = 0; i < n - 2; i++) {
        for (size_t j = i + 1; j < n - 1; j++) {
            for (size_t k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    assert(triples_sum_to_zero({100, 3, 5, -100}) == false);
    return 0;
}