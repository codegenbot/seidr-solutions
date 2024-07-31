```cpp
#include <vector>
#include <cassert>

bool is_sorted(std::vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    int count = 0;
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] == lst[i + 1]) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
}