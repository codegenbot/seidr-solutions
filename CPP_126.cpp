```cpp
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else
            break;
    }

    return std::all_of(lst.begin(), lst.end(), [&lst](int x) { return count(lst.begin(), lst.end(), x) <= 1; });
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}