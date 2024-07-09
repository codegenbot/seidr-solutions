#include <vector>
#include <cassert>

int main() {
    bool is_sorted(vector<int> lst) {
        for (int i = 0; i < lst.size() - 1; ++i) {
            if (lst[i] >= lst[i + 1]) {
                return false;
            }
        }
        return true;
    }

    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}