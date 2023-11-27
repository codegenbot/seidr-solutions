#include <vector>
#include <cassert>

bool pairs_sum_to_zero(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Sample test cases
    std::vector<int> list1 = {1, 2, -3, 4, -2};
    assert(pairs_sum_to_zero(list1) == true);

    std::vector<int> list2 = {1, 2, 3, 4, 5};
    assert(pairs_sum_to_zero(list2) == false);

    return 0;
}