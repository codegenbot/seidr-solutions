#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_vector(const std::vector<int>& lst) {
    std::vector<int> result;

    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        int max_val = *std::max_element(lst.begin(), lst.end());

        auto it_min = std::find_if(lst.begin(), lst.end(), [min_val](int x) { return x != min_val; });
        auto it_max = std::find_if(lst.begin(), lst.end(), [max_val](int x) { return x != max_val; });

        result.push_back(*it_min);
        lst.erase(it_min);
        result.push_back(*it_max);
        lst.erase(it_max);
    }

    return result;
}