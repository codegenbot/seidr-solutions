#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_vector({1, 2}), vector<int>({1, 2})));
    return 0;
}