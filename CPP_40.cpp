
#include <vector>
#include <cassert>

bool triples_sum_to_zero(const std::vector<int>& l) {
    for (size_t i = 0; i < l.size() - 2; ++i) {
        for (size_t j = i + 1; j < l.size() - 1; ++j) {
            for (size_t k = j + 1; k < l.size(); ++k) {
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
    // Add more test cases as needed
    return 0;
}