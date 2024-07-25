#include <vector>
#include <cassert>

bool triples_sum_to_zero(const std::vector<int>& l) {
    int n = l.size();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    // Test case 1: No triple sum to zero
    assert(triples_sum_to_zero({100, 3, 5, -100}) == false);

    // Test case 2: Triple sum to zero
    assert(triples_sum_to_zero({1, -1, 2, 3, -2}) == true);

    // Test case 3: All zeros
    assert(triples_sum_to_zero({0, 0, 0, 0}) == true);

    // Test case 4: Single element
    assert(triples_sum_to_zero({5}) == false);

    return 0;
}