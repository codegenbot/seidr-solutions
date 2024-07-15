#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool pairs_sum_to_zero(const std::vector<int>& l) {
    size_t i, j;
    for (i = 0; i < l.size() - 1; ++i) {
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
    return 0;
}