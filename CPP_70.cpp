#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        auto it_min = std::remove_if(lst.begin(), lst.end(), [min_val](int x) { return x != min_val; });
        lst.erase(it_min, lst.end());
        if (it_min != lst.end()) {
            result.push_back(*it_min);
        }

        auto it_max = std::remove_if(lst.begin(), lst.end(), [max_val](int x) { return x != max_val; });
        lst.erase(it_max, lst.end());
        if (it_max != lst.end()) {
            result.push_back(*it_max);
        }
    }

    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), std::vector<int>({111111})));
    return 0;
}