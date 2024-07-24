#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        if (count(lst.begin(), lst.end(), min_val) > 1 || count(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())) > 1) {
            result.push_back(min_val);
            while (count(lst.begin(), lst.end(), min_val)) {
                lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
            }
        } else {
            for (int val : lst) {
                if (val != min_val && val != *max_element(lst.begin(), lst.end())) {
                    result.push_back(val);
                    break;
                }
            }
            while ((count(lst.begin(), lst.end(), min_val) || count(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end()))) > 1) {
                if (min_val < *max_element(lst.begin(), lst.end())) {
                    lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
                } else {
                    lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
                }
            }
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    return 0;
}