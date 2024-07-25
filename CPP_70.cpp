#include <vector>
#include <algorithm>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> min_max;
    for (int num : lst) {
        if (num < *min_max.begin() || min_max.empty())
            min_max.push_back(num);
        else if (*min_max.rbegin() > num)
            min_max.push_back(num);
    }

    while (!lst.empty()) {
        result.push_back(*min_max.begin());
        auto it = std::remove(lst.begin(), lst.end(), *min_max.begin());
        lst.erase(it, lst.end());
        min_max.clear();
        for (int num : lst) {
            if (num < *min_max.begin() || min_max.empty())
                min_max.push_back(num);
            else if (*min_max.rbegin() > num)
                min_max.push_back(num);
        }
    }

    return result;
}