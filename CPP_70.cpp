#include <algorithm>
#include <vector>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it == min_val) {
                result.push_back(*it);
                lst.erase(it);
                break;
            }
        }

        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it == max_val) {
                result.push_back(*it);
                lst.erase(it);
                break;
            }
        }
    }

    return result;
}

int main() {
    assert(issame({1, 2, 3}, strange_sort_vector({3, 2, 1})));
    return 0;
}