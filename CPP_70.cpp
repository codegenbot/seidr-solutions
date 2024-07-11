#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        auto min_iter = std::min_element(lst.begin(), lst.end());
        result.push_back(*min_iter);
        lst.erase(min_iter);

        if (!lst.empty()) {
            auto max_iter = std::max_element(lst.begin(), lst.end());
            result.push_back(*max_iter);
            lst.erase(max_iter);
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    return 0;
}