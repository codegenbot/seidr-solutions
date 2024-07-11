#include <vector>
#include <algorithm>
#include <numeric>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.clear();
        } else {
            result.push_back(min_val);
            auto it = find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; });
            result.push_back(*it);
            lst.erase(it);
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    // Rest of your code...
}