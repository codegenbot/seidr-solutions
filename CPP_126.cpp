#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    assert(is_sorted(input) == true);

    vector<int> input2 = {1, 2, 3, 2, 5};
    assert(is_sorted(input2) == false);

    return 0;
}