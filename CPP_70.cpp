#include <algorithm>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    if (lst.empty()) return result;

    while (!lst.empty()) {
        auto min_val = *min_element(lst.begin(), lst.end());
        auto it_min = std::find(lst.begin(), lst.end(), min_val);
        result.push_back(*it_min);
        lst.erase(it_min);

        auto max_val = *max_element(lst.begin(), lst.end());
        auto it_max = std::find(lst.begin(), lst.end(), max_val);
        result.push_back(*it_max);
        lst.erase(it_max);
    }

    return result;
}

int main() {
    assert(issame(strange_sort_list({1, 1, 1, 1}), {1, 1, 1, 1}));
    return 0;
}