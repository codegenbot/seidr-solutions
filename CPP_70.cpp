#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto it_min = std::find_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; });
        if (it_min != lst.end()) {
            result.push_back(*it_min);
            lst.erase(it_min);
        }

        auto it_max = std::find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; });
        if (it_max != lst.end()) {
            result.push_back(*it_max);
            lst.erase(it_max);
        }
    }

    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = strange_sort_list(a);
    if (!issame(a, b)) {
        for (size_t i = 0; i < a.size(); ++i) {
            assert(b[i] == a[i]);
        }
    }
}