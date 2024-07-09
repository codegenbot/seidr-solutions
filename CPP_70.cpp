```cpp
#include <algorithm>
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_list(std::initializer_list<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> vec(lst);
    sort(vec.begin(), vec.end());
    while (!vec.empty()) {
        result.push_back(*vec.begin());
        vec.erase(vec.begin());
        if (!vec.empty())
            sort(vec.begin(), vec.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}