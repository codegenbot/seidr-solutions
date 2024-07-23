```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> list) {
    std::sort(list.begin(), list.end());
    int i = 0, j = list.size() - 1;
    while (i < j) {
        if (list[i] > list[j]) {
            std::swap(list[i], list[j]);
            i++;
            j--;
        } else if (list[i] < list[j])
            j--;
        else
            i++;
    }
    return list;
}

int main() {
    assert(strange_sort_list({111111}) == ({111111}));
    return 0;
}